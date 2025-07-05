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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEUSAGE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ResourceUsageDetail.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster resource usage
                */
                class ResourceUsage : public AbstractModel
                {
                public:
                    ResourceUsage();
                    ~ResourceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type
                     * @return Name Resource type
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource type
                     * @param _name Resource type
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Resource usage
                     * @return Usage Resource usage
                     * 
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置Resource usage
                     * @param _usage Resource usage
                     * 
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Resource usage details
                     * @return Details Resource usage details
                     * 
                     */
                    std::vector<ResourceUsageDetail> GetDetails() const;

                    /**
                     * 设置Resource usage details
                     * @param _details Resource usage details
                     * 
                     */
                    void SetDetails(const std::vector<ResourceUsageDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Resource type
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Resource usage
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Resource usage details
                     */
                    std::vector<ResourceUsageDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEUSAGE_H_
