/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Certificate operation logs
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action performed on logs
                     * @return Action Action performed on logs
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action performed on logs
                     * @param _action Action performed on logs
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Time when the action is performed
                     * @return CreatedOn Time when the action is performed
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Time when the action is performed
                     * @param _createdOn Time when the action is performed
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Root account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Uin Root account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Root account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uin Root account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-Account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubAccountUin Sub-Account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub-Account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subAccountUin Sub-Account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertId Certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certId Certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Each operation type corresponds to a specific operation description. the following is a textual explanation of each operation type and its description:.
1. apply: indicates applying for a free cert.
2. delete: indicates a deletion.
3. download - represents the download operation.
4. upload: indicates an upload operation.
5. revoke: indicates revoking a cert.
6. cancelRevoke - indicates canceling the revocation operation.
7. updateAlias - indicates updating the remark information.
8. changeProject - indicates assigning the certificate to a certain project.
9. uploadConfirmLetter - indicates uploading the confirmation letter.
10. cancel - indicates canceling the order operation.
11. replace - specifies reissuing a certificate.
12. downloadConfirmLetter - specifies downloading a certificate revocation confirmation letter.
13. editRevokeLetter - specifies uploading a certificate revocation confirmation letter.
14. renewVIP - specifies renewing a paid certificate.
15. applyVIP - specifies applying for a paid certificate.
16. submitInfo - specifies submitting documentation.
17. downloadConfirmLetter - specifies downloading the confirmation letter template.
18. uploadFromYunAPI - indicates uploading via the cloud api.
19. transferIn - indicates the certificate transfer to operation.
20. transferOut - indicates the certificate transfer operation.
21. refund - indicates applying for a refund.
22. multiYearsRenew - indicates multi-year auto-renewal.
23. modifyDownloadLimit - indicates modifying the download limit switch.
24. issued - indicates certificate issuance.
25. domainValidationPassed - indicates domain verification completed.
26. Resubmit - indicates reapplying for a certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type Each operation type corresponds to a specific operation description. the following is a textual explanation of each operation type and its description:.
1. apply: indicates applying for a free cert.
2. delete: indicates a deletion.
3. download - represents the download operation.
4. upload: indicates an upload operation.
5. revoke: indicates revoking a cert.
6. cancelRevoke - indicates canceling the revocation operation.
7. updateAlias - indicates updating the remark information.
8. changeProject - indicates assigning the certificate to a certain project.
9. uploadConfirmLetter - indicates uploading the confirmation letter.
10. cancel - indicates canceling the order operation.
11. replace - specifies reissuing a certificate.
12. downloadConfirmLetter - specifies downloading a certificate revocation confirmation letter.
13. editRevokeLetter - specifies uploading a certificate revocation confirmation letter.
14. renewVIP - specifies renewing a paid certificate.
15. applyVIP - specifies applying for a paid certificate.
16. submitInfo - specifies submitting documentation.
17. downloadConfirmLetter - specifies downloading the confirmation letter template.
18. uploadFromYunAPI - indicates uploading via the cloud api.
19. transferIn - indicates the certificate transfer to operation.
20. transferOut - indicates the certificate transfer operation.
21. refund - indicates applying for a refund.
22. multiYearsRenew - indicates multi-year auto-renewal.
23. modifyDownloadLimit - indicates modifying the download limit switch.
24. issued - indicates certificate issuance.
25. domainValidationPassed - indicates domain verification completed.
26. Resubmit - indicates reapplying for a certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Each operation type corresponds to a specific operation description. the following is a textual explanation of each operation type and its description:.
1. apply: indicates applying for a free cert.
2. delete: indicates a deletion.
3. download - represents the download operation.
4. upload: indicates an upload operation.
5. revoke: indicates revoking a cert.
6. cancelRevoke - indicates canceling the revocation operation.
7. updateAlias - indicates updating the remark information.
8. changeProject - indicates assigning the certificate to a certain project.
9. uploadConfirmLetter - indicates uploading the confirmation letter.
10. cancel - indicates canceling the order operation.
11. replace - specifies reissuing a certificate.
12. downloadConfirmLetter - specifies downloading a certificate revocation confirmation letter.
13. editRevokeLetter - specifies uploading a certificate revocation confirmation letter.
14. renewVIP - specifies renewing a paid certificate.
15. applyVIP - specifies applying for a paid certificate.
16. submitInfo - specifies submitting documentation.
17. downloadConfirmLetter - specifies downloading the confirmation letter template.
18. uploadFromYunAPI - indicates uploading via the cloud api.
19. transferIn - indicates the certificate transfer to operation.
20. transferOut - indicates the certificate transfer operation.
21. refund - indicates applying for a refund.
22. multiYearsRenew - indicates multi-year auto-renewal.
23. modifyDownloadLimit - indicates modifying the download limit switch.
24. issued - indicates certificate issuance.
25. domainValidationPassed - indicates domain verification completed.
26. Resubmit - indicates reapplying for a certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _type Each operation type corresponds to a specific operation description. the following is a textual explanation of each operation type and its description:.
1. apply: indicates applying for a free cert.
2. delete: indicates a deletion.
3. download - represents the download operation.
4. upload: indicates an upload operation.
5. revoke: indicates revoking a cert.
6. cancelRevoke - indicates canceling the revocation operation.
7. updateAlias - indicates updating the remark information.
8. changeProject - indicates assigning the certificate to a certain project.
9. uploadConfirmLetter - indicates uploading the confirmation letter.
10. cancel - indicates canceling the order operation.
11. replace - specifies reissuing a certificate.
12. downloadConfirmLetter - specifies downloading a certificate revocation confirmation letter.
13. editRevokeLetter - specifies uploading a certificate revocation confirmation letter.
14. renewVIP - specifies renewing a paid certificate.
15. applyVIP - specifies applying for a paid certificate.
16. submitInfo - specifies submitting documentation.
17. downloadConfirmLetter - specifies downloading the confirmation letter template.
18. uploadFromYunAPI - indicates uploading via the cloud api.
19. transferIn - indicates the certificate transfer to operation.
20. transferOut - indicates the certificate transfer operation.
21. refund - indicates applying for a refund.
22. multiYearsRenew - indicates multi-year auto-renewal.
23. modifyDownloadLimit - indicates modifying the download limit switch.
24. issued - indicates certificate issuance.
25. domainValidationPassed - indicates domain verification completed.
26. Resubmit - indicates reapplying for a certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Action performed on logs
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Time when the action is performed
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Root account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-Account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Certificate id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Each operation type corresponds to a specific operation description. the following is a textual explanation of each operation type and its description:.
1. apply: indicates applying for a free cert.
2. delete: indicates a deletion.
3. download - represents the download operation.
4. upload: indicates an upload operation.
5. revoke: indicates revoking a cert.
6. cancelRevoke - indicates canceling the revocation operation.
7. updateAlias - indicates updating the remark information.
8. changeProject - indicates assigning the certificate to a certain project.
9. uploadConfirmLetter - indicates uploading the confirmation letter.
10. cancel - indicates canceling the order operation.
11. replace - specifies reissuing a certificate.
12. downloadConfirmLetter - specifies downloading a certificate revocation confirmation letter.
13. editRevokeLetter - specifies uploading a certificate revocation confirmation letter.
14. renewVIP - specifies renewing a paid certificate.
15. applyVIP - specifies applying for a paid certificate.
16. submitInfo - specifies submitting documentation.
17. downloadConfirmLetter - specifies downloading the confirmation letter template.
18. uploadFromYunAPI - indicates uploading via the cloud api.
19. transferIn - indicates the certificate transfer to operation.
20. transferOut - indicates the certificate transfer operation.
21. refund - indicates applying for a refund.
22. multiYearsRenew - indicates multi-year auto-renewal.
23. modifyDownloadLimit - indicates modifying the download limit switch.
24. issued - indicates certificate issuance.
25. domainValidationPassed - indicates domain verification completed.
26. Resubmit - indicates reapplying for a certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
