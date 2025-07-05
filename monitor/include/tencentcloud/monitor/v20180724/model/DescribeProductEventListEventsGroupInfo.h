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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSGROUPINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSGROUPINFO_H_

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
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GroupInfo in Events returned by the DescribeProductEventList API
                */
                class DescribeProductEventListEventsGroupInfo : public AbstractModel
                {
                public:
                    DescribeProductEventListEventsGroupInfo();
                    ~DescribeProductEventListEventsGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return GroupId Policy ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _groupId Policy ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
Note: This field may return null, indicating that no valid value was found.
                     * @return GroupName Policy name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy name.
Note: This field may return null, indicating that no valid value was found.
                     * @param _groupName Policy name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * Policy ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Policy name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTSGROUPINFO_H_
