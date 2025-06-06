./push_swap 37 2 98 86 23 65 49 14 92 80 56 13 75 7 91 33 71 22 5 43 58 62 9 68 28 45 3 96 16 1 99 64 84 20 31 35 89 93 18 6 59 19 95 10 85 25 36 38 11 12 50 100 26 66 42 60 8 24 44 30 15 34 21 17 39 29 4 40 70 41 46 63 67 32 27 48 52 76 83 97 47 73 87 55 94 90 78 53 61 69 57 81 79 88 77 51 74 72 82 54 | wc -l

./push_swap 113 25 354 349 176 301 117 366 109 325 59 414 364 80 166 36 359 378 73 402 258 46 360 293 462 274 209 329 181 278 352 259 186 154 421 52 159 67 137 110 195 391 43 183 95 440 219 338 182 50 371 284 401 143 308 422 271 317 238 78 103 355 124 97 14 225 65 452 178 388 467 367 217 239 346 441 4 316 10 463 289 498 285 47 57 32 138 350 303 188 475 480 126 309 424 77 172 3 205 387 473 101 409 227 263 88 394 472 16 94 214 370 273 49 194 123 481 152 168 139 37 476 141 459 9 83 330 89 431 31 244 250 429 135 266 237 100 496 345 202 353 249 290 372 343 356 28 197 56 493 165 310 2 358 162 484 8 270 411 319 5 206 144 478 471 222 342 246 99 233 251 407 396 61 53 292 385 262 69 415 331 229 404 150 348 341 337 413 15 156 41 272 468 446 291 436 93 288 379 299 280 45 313 44 408 60 489 232 91 104 105 231 211 119 314 418 427 470 220 191 403 433 82 451 240 393 174 376 486 425 297 336 442 248 450 426 460 179 228 161 368 7 456 234 335 392 477 351 170 192 488 102 199 497 48 487 420 483 454 247 389 295 374 443 412 417 212 147 260 397 381 221 111 276 333 85 277 213 256 134 12 55 66 6 242 215 298 332 334 114 122 281 90 306 157 115 30 74 108 107 245 384 23 160 406 87 148 218 286 63 39 386 64 189 257 326 72 435 235 453 305 243 405 318 223 312 267 128 187 304 294 302 149 200 439 68 474 120 180 241 24 300 185 19 54 265 145 184 112 328 116 447 158 347 375 132 275 40 339 207 216 287 315 18 428 390 84 322 27 190 491 201 362 466 457 1 196 361 340 269 142 20 70 444 254 127 75 495 26 279 261 398 140 344 153 136 419 81 86 482 324 164 268 208 296 490 416 129 438 373 363 369 320 163 307 151 173 175 171 79 430 455 155 62 448 461 204 399 282 58 479 34 357 131 42 167 311 125 255 118 133 264 395 423 35 226 494 365 400 236 230 449 193 51 465 323 458 198 499 11 434 383 71 130 492 500 382 17 76 224 177 210 203 96 38 445 485 92 283 146 321 121 29 21 253 252 380 464 106 437 377 22 469 327 169 98 33 13 410 432 | wc -l

./push_swap 5 1 2 4 3

bash push_swap_test_linux.sh

ARG="2 1 0"; ./push_swap $ARG | ./checker_linux $ARG
//
// Run "$>ARG="2 1 0"; ./push_swap $ARG | ./checker_OS $ARG".
// Check that the checker program displays "OK" and that the
// size of the list of instructions from push_swap is 2 OR 3.
// Otherwise the test fails.

// Run "$>ARG="<Between 0 and 3 randomly chosen values>"; ./push_swap
// $ARG | ./checker_OS $ARG".
// Check that the checker program displays
// "OK" and that the size of the list of instructions from push_swap
// is between 0 AND 3. Otherwise the test fails.

// Run "$>ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_OS $ARG".
// Check that the checker program displays "OK" and that the
// size of the instruction list from push_swap does not exceed 12.
// Kudos if the instruction list contains only 8 steps.

// Run "$>ARG="<5 random values>"; ./push_swap $ARG | ./checker_OS
// $ARG" and replace the placeholder by 5 random valid values.

// Check that the checker program displays "OK" and that the
// size of the list of instructions from push_swap isn't more
// than 12. Otherwise this test fails. You'll have to
// specifically check that the program wasn't developed to only
// answer correctly on the test included in this scale. You
// should repeat this test couple of times with several
// permutations before you validate it.


// ARG="<100 random values>"; ./push_swap $ARG | ./checker_OS $ARG" and replace the placeholder by 100 random valid values. Check that the checker program displays "OK" and that the size of the list of instructions. Give points in accordance:
// less than 700: 5
// less than 900: 4
// less than 1100: 3
// less than 1300: 2
// less than 1500: 1 You'll have to specifically check that the program wasn't developed to only answer correctly on the test included in this scale. You should repeat this test multiple times with different permutations before validating it.
