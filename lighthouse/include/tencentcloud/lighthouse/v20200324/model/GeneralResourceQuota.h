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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_GENERALRESOURCEQUOTA_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_GENERALRESOURCEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * General resource quota information.


                */
                class GeneralResourceQuota : public AbstractModel
                {
                public:
                    GeneralResourceQuota();
                    ~GeneralResourceQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name.
                     * @return ResourceName Resource name.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name.
                     * @param _resourceName Resource name.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Number of available resources.
                     * @return ResourceQuotaAvailable Number of available resources.
                     * 
                     */
                    int64_t GetResourceQuotaAvailable() const;

                    /**
                     * 设置Number of available resources.
                     * @param _resourceQuotaAvailable Number of available resources.
                     * 
                     */
                    void SetResourceQuotaAvailable(const int64_t& _resourceQuotaAvailable);

                    /**
                     * 判断参数 ResourceQuotaAvailable 是否已赋值
                     * @return ResourceQuotaAvailable 是否已赋值
                     * 
                     */
                    bool ResourceQuotaAvailableHasBeenSet() const;

                    /**
                     * 获取Total number of resources.
                     * @return ResourceQuotaTotal Total number of resources.
                     * 
                     */
                    int64_t GetResourceQuotaTotal() const;

                    /**
                     * 设置Total number of resources.
                     * @param _resourceQuotaTotal Total number of resources.
                     * 
                     */
                    void SetResourceQuotaTotal(const int64_t& _resourceQuotaTotal);

                    /**
                     * 判断参数 ResourceQuotaTotal 是否已赋值
                     * @return ResourceQuotaTotal 是否已赋值
                     * 
                     */
                    bool ResourceQuotaTotalHasBeenSet() const;

                private:

                    /**
                     * Resource name.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Number of available resources.
                     */
                    int64_t m_resourceQuotaAvailable;
                    bool m_resourceQuotaAvailableHasBeenSet;

                    /**
                     * Total number of resources.
                     */
                    int64_t m_resourceQuotaTotal;
                    bool m_resourceQuotaTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_GENERALRESOURCEQUOTA_H_
