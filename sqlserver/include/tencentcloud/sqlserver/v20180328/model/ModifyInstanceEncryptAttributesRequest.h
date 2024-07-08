/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyInstanceEncryptAttributes request structure.
                */
                class ModifyInstanceEncryptAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceEncryptAttributesRequest();
                    ~ModifyInstanceEncryptAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Certificate ownership. Valid values: `self` (certificate of this account), `others` (certificate of the other account). Default value: `self`.
                     * @return CertificateAttribution Certificate ownership. Valid values: `self` (certificate of this account), `others` (certificate of the other account). Default value: `self`.
                     * 
                     */
                    std::string GetCertificateAttribution() const;

                    /**
                     * 设置Certificate ownership. Valid values: `self` (certificate of this account), `others` (certificate of the other account). Default value: `self`.
                     * @param _certificateAttribution Certificate ownership. Valid values: `self` (certificate of this account), `others` (certificate of the other account). Default value: `self`.
                     * 
                     */
                    void SetCertificateAttribution(const std::string& _certificateAttribution);

                    /**
                     * 判断参数 CertificateAttribution 是否已赋值
                     * @return CertificateAttribution 是否已赋值
                     * 
                     */
                    bool CertificateAttributionHasBeenSet() const;

                    /**
                     * 获取ID of the other referenced root account, which is required when `CertificateAttribution` is `others`.
                     * @return QuoteUin ID of the other referenced root account, which is required when `CertificateAttribution` is `others`.
                     * 
                     */
                    std::string GetQuoteUin() const;

                    /**
                     * 设置ID of the other referenced root account, which is required when `CertificateAttribution` is `others`.
                     * @param _quoteUin ID of the other referenced root account, which is required when `CertificateAttribution` is `others`.
                     * 
                     */
                    void SetQuoteUin(const std::string& _quoteUin);

                    /**
                     * 判断参数 QuoteUin 是否已赋值
                     * @return QuoteUin 是否已赋值
                     * 
                     */
                    bool QuoteUinHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Certificate ownership. Valid values: `self` (certificate of this account), `others` (certificate of the other account). Default value: `self`.
                     */
                    std::string m_certificateAttribution;
                    bool m_certificateAttributionHasBeenSet;

                    /**
                     * ID of the other referenced root account, which is required when `CertificateAttribution` is `others`.
                     */
                    std::string m_quoteUin;
                    bool m_quoteUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_
