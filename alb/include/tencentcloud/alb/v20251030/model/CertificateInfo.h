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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Certificate information.
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate binding time.
                     * @return AssociatedTime Certificate binding time.
                     * 
                     */
                    std::string GetAssociatedTime() const;

                    /**
                     * 设置Certificate binding time.
                     * @param _associatedTime Certificate binding time.
                     * 
                     */
                    void SetAssociatedTime(const std::string& _associatedTime);

                    /**
                     * 判断参数 AssociatedTime 是否已赋值
                     * @return AssociatedTime 是否已赋值
                     * 
                     */
                    bool AssociatedTimeHasBeenSet() const;

                    /**
                     * 获取Certificate ID.
                     * @return CertificateId Certificate ID.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID.
                     * @param _certificateId Certificate ID.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Certificate type. Valid values: CA or SVR (server certificate).
                     * @return CertificateType Certificate type. Valid values: CA or SVR (server certificate).
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. Valid values: CA or SVR (server certificate).
                     * @param _certificateType Certificate type. Valid values: CA or SVR (server certificate).
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is the default certificate of the listener. Value:
true: default certificate.
false: expand the certificate.
                     * @return IsDefault Whether it is the default certificate of the listener. Value:
true: default certificate.
false: expand the certificate.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default certificate of the listener. Value:
true: default certificate.
false: expand the certificate.
                     * @param _isDefault Whether it is the default certificate of the listener. Value:
true: default certificate.
false: expand the certificate.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取The binding status of the certificate and listener. Values: Associated, Associating, Disassociating, Error.
                     * @return Status The binding status of the certificate and listener. Values: Associated, Associating, Disassociating, Error.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The binding status of the certificate and listener. Values: Associated, Associating, Disassociating, Error.
                     * @param _status The binding status of the certificate and listener. Values: Associated, Associating, Disassociating, Error.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Certificate binding time.
                     */
                    std::string m_associatedTime;
                    bool m_associatedTimeHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate type. Valid values: CA or SVR (server certificate).
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Whether it is the default certificate of the listener. Value:
true: default certificate.
false: expand the certificate.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * The binding status of the certificate and listener. Values: Associated, Associating, Disassociating, Error.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_
