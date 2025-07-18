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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Decommissioned resource
                */
                class ResourceOffline : public AbstractModel
                {
                public:
                    ResourceOffline();
                    ~ResourceOffline() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResourceId() const;

                    /**
                     * 设置Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceId(const int64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource decommissioning time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceDeleteTime Resource decommissioning time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceDeleteTime() const;

                    /**
                     * 设置Resource decommissioning time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceDeleteTime Resource decommissioning time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceDeleteTime(const std::string& _resourceDeleteTime);

                    /**
                     * 判断参数 ResourceDeleteTime 是否已赋值
                     * @return ResourceDeleteTime 是否已赋值
                     * 
                     */
                    bool ResourceDeleteTimeHasBeenSet() const;

                    /**
                     * 获取Resource decommissioning reminder
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceDeleteMessage Resource decommissioning reminder
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceDeleteMessage() const;

                    /**
                     * 设置Resource decommissioning reminder
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceDeleteMessage Resource decommissioning reminder
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceDeleteMessage(const std::string& _resourceDeleteMessage);

                    /**
                     * 判断参数 ResourceDeleteMessage 是否已赋值
                     * @return ResourceDeleteMessage 是否已赋值
                     * 
                     */
                    bool ResourceDeleteMessageHasBeenSet() const;

                private:

                    /**
                     * Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource decommissioning time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceDeleteTime;
                    bool m_resourceDeleteTimeHasBeenSet;

                    /**
                     * Resource decommissioning reminder
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceDeleteMessage;
                    bool m_resourceDeleteMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_
