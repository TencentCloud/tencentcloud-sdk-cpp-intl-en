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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Product support.
                */
                class ServiceSupport : public AbstractModel
                {
                public:
                    ServiceSupport();
                    ~ServiceSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name.
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @return ServiceName Product name.
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Product name.
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @param _serviceName Product name.
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Total number of processed assets.
                     * @return SupportHandledCount Total number of processed assets.
                     * 
                     */
                    int64_t GetSupportHandledCount() const;

                    /**
                     * 设置Total number of processed assets.
                     * @param _supportHandledCount Total number of processed assets.
                     * 
                     */
                    void SetSupportHandledCount(const int64_t& _supportHandledCount);

                    /**
                     * 判断参数 SupportHandledCount 是否已赋值
                     * @return SupportHandledCount 是否已赋值
                     * 
                     */
                    bool SupportHandledCountHasBeenSet() const;

                    /**
                     * 获取Total number of supported assets.
                     * @return SupportTotalCount Total number of supported assets.
                     * 
                     */
                    int64_t GetSupportTotalCount() const;

                    /**
                     * 设置Total number of supported assets.
                     * @param _supportTotalCount Total number of supported assets.
                     * 
                     */
                    void SetSupportTotalCount(const int64_t& _supportTotalCount);

                    /**
                     * 判断参数 SupportTotalCount 是否已赋值
                     * @return SupportTotalCount 是否已赋值
                     * 
                     */
                    bool SupportTotalCountHasBeenSet() const;

                    /**
                     * 获取Whether the product is supported: 1 for supported; 0 for unsupported.
                     * @return IsSupport Whether the product is supported: 1 for supported; 0 for unsupported.
                     * 
                     */
                    bool GetIsSupport() const;

                    /**
                     * 设置Whether the product is supported: 1 for supported; 0 for unsupported.
                     * @param _isSupport Whether the product is supported: 1 for supported; 0 for unsupported.
                     * 
                     */
                    void SetIsSupport(const bool& _isSupport);

                    /**
                     * 判断参数 IsSupport 是否已赋值
                     * @return IsSupport 是否已赋值
                     * 
                     */
                    bool IsSupportHasBeenSet() const;

                private:

                    /**
                     * Product name.
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Total number of processed assets.
                     */
                    int64_t m_supportHandledCount;
                    bool m_supportHandledCountHasBeenSet;

                    /**
                     * Total number of supported assets.
                     */
                    int64_t m_supportTotalCount;
                    bool m_supportTotalCountHasBeenSet;

                    /**
                     * Whether the product is supported: 1 for supported; 0 for unsupported.
                     */
                    bool m_isSupport;
                    bool m_isSupportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_
