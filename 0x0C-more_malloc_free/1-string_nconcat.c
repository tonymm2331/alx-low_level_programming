char *string_nconcat(char *s1, char *s2, unsigned int n) {
  """Concatenates two strings.

  Args:
    s1: The first string.
    s2: The second string.
    n: The number of bytes to copy from s2.

  Returns:
    A pointer to a newly allocated space in memory, which contains s1, followed by
    the first n bytes of s2, and null terminated.
    If the function fails, it should return NULL.
    If n is greater or equal to the length of s2 then use the entire string s2.
    if NULL is passed, treat it as an empty string.
  """

  if (s1 == NULL) {
    s1 = "";
  }
  if (s2 == NULL) {
    s2 = "";
  }

  size_t s1_len = strlen(s1);
  size_t s2_len = strlen(s2);

  if (n >= s2_len) {
    n = s2_len;
  }

  char *result = malloc(s1_len + n + 1);
  if (result == NULL) {
    return NULL;
  }

  memcpy(result, s1, s1_len);
  memcpy(result + s1_len, s2, n);
  result[s1_len + n] = '\0';

  return result;
}

