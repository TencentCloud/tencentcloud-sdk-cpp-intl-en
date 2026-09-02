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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDASSETINFO_H_

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
                * Number of assets by cloud service provider
                */
                class CloudAssetInfo : public AbstractModel
                {
                public:
                    CloudAssetInfo();
                    ~CloudAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud vendor type
Enumeration values:
tencent: tencent Cloud
aliyun: Alibaba Cloud
aws:AWS
huawei: Huawei Cloud
azure:Azure
                     * @return CloudType Cloud vendor type
Enumeration values:
tencent: tencent Cloud
aliyun: Alibaba Cloud
aws:AWS
huawei: Huawei Cloud
azure:Azure
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置Cloud vendor type
Enumeration values:
tencent: tencent Cloud
aliyun: Alibaba Cloud
aws:AWS
huawei: Huawei Cloud
azure:Azure
                     * @param _cloudType Cloud vendor type
Enumeration values:
tencent: tencent Cloud
aliyun: Alibaba Cloud
aws:AWS
huawei: Huawei Cloud
azure:Azure
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Number of assets of the cloud service provider
Valid values: [0, +∞)
                     * @return Count Number of assets of the cloud service provider
Valid values: [0, +∞)
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of assets of the cloud service provider
Valid values: [0, +∞)
                     * @param _count Number of assets of the cloud service provider
Valid values: [0, +∞)
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Cloud vendor type
Enumeration values:
tencent: tencent Cloud
aliyun: Alibaba Cloud
aws:AWS
huawei: Huawei Cloud
azure:Azure
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Number of assets of the cloud service provider
Valid values: [0, +∞)
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDASSETINFO_H_
