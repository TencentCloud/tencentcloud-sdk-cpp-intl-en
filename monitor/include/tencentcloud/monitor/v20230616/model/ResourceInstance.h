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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Resource instance
                */
                class ResourceInstance : public AbstractModel
                {
                public:
                    ResourceInstance();
                    ~ResourceInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID</p>
                     * @return Id <p>Instance ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _id <p>Instance ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Service name</p>
                     * @return Service <p>Service name</p>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>Service name</p>
                     * @param _service <p>Service name</p>
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Ready?</p>
                     * @return IsReady <p>Ready?</p>
                     * 
                     */
                    bool GetIsReady() const;

                    /**
                     * 设置<p>Ready?</p>
                     * @param _isReady <p>Ready?</p>
                     * 
                     */
                    void SetIsReady(const bool& _isReady);

                    /**
                     * 判断参数 IsReady 是否已赋值
                     * @return IsReady 是否已赋值
                     * 
                     */
                    bool IsReadyHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Service name</p>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Ready?</p>
                     */
                    bool m_isReady;
                    bool m_isReadyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_
