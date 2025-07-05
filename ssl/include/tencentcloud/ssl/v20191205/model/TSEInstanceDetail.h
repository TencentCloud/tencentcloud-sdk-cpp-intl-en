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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/GatewayCertificate.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * TSE instance details
                */
                class TSEInstanceDetail : public AbstractModel
                {
                public:
                    TSEInstanceDetail();
                    ~TSEInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return GatewayId Gateway ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _gatewayId Gateway ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Gateway name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return GatewayName Gateway name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置Gateway name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _gatewayName Gateway name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取Gateway certificate list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CertificateList Gateway certificate list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<GatewayCertificate> GetCertificateList() const;

                    /**
                     * 设置Gateway certificate list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _certificateList Gateway certificate list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCertificateList(const std::vector<GatewayCertificate>& _certificateList);

                    /**
                     * 判断参数 CertificateList 是否已赋值
                     * @return CertificateList 是否已赋值
                     * 
                     */
                    bool CertificateListHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway certificate list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<GatewayCertificate> m_certificateList;
                    bool m_certificateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TSEINSTANCEDETAIL_H_
