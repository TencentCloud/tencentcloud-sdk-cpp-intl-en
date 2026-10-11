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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Resource group information
                */
                class ResourceGroupInfo : public AbstractModel
                {
                public:
                    ResourceGroupInfo();
                    ~ResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource group ID</p>
                     * @return ResourceGroupId <p>Resource group ID</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>Resource group ID</p>
                     * @param _resourceGroupId <p>Resource group ID</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Resource group name.</p>
                     * @return ResourceGroupName <p>Resource group name.</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>Resource group name.</p>
                     * @param _resourceGroupName <p>Resource group name.</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Resource group status</p><p>Parameter format: 0 // not specified 1 // to be created 2 // creating 3 // running 4 // stopped 5 // stopping 6 // starting 7 // updating 8 // deleting 9 // deleted 10 // user proactive start / automatic startup (task submitted and auto start/stop enabled) 11 // available: unique to data computing 12 // unavailable: unique to data computing 13 // failure</p>
                     * @return ResourceGroupStatus <p>Resource group status</p><p>Parameter format: 0 // not specified 1 // to be created 2 // creating 3 // running 4 // stopped 5 // stopping 6 // starting 7 // updating 8 // deleting 9 // deleted 10 // user proactive start / automatic startup (task submitted and auto start/stop enabled) 11 // available: unique to data computing 12 // unavailable: unique to data computing 13 // failure</p>
                     * 
                     */
                    std::string GetResourceGroupStatus() const;

                    /**
                     * 设置<p>Resource group status</p><p>Parameter format: 0 // not specified 1 // to be created 2 // creating 3 // running 4 // stopped 5 // stopping 6 // starting 7 // updating 8 // deleting 9 // deleted 10 // user proactive start / automatic startup (task submitted and auto start/stop enabled) 11 // available: unique to data computing 12 // unavailable: unique to data computing 13 // failure</p>
                     * @param _resourceGroupStatus <p>Resource group status</p><p>Parameter format: 0 // not specified 1 // to be created 2 // creating 3 // running 4 // stopped 5 // stopping 6 // starting 7 // updating 8 // deleting 9 // deleted 10 // user proactive start / automatic startup (task submitted and auto start/stop enabled) 11 // available: unique to data computing 12 // unavailable: unique to data computing 13 // failure</p>
                     * 
                     */
                    void SetResourceGroupStatus(const std::string& _resourceGroupStatus);

                    /**
                     * 判断参数 ResourceGroupStatus 是否已赋值
                     * @return ResourceGroupStatus 是否已赋值
                     * 
                     */
                    bool ResourceGroupStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Resource group ID</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>Resource group name.</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>Resource group status</p><p>Parameter format: 0 // not specified 1 // to be created 2 // creating 3 // running 4 // stopped 5 // stopping 6 // starting 7 // updating 8 // deleting 9 // deleted 10 // user proactive start / automatic startup (task submitted and auto start/stop enabled) 11 // available: unique to data computing 12 // unavailable: unique to data computing 13 // failure</p>
                     */
                    std::string m_resourceGroupStatus;
                    bool m_resourceGroupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_
