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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ProxySimpleInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * The connection groups from which the statistics can be derived, and the connection information.
                */
                class GroupStatisticsInfo : public AbstractModel
                {
                public:
                    GroupStatisticsInfo();
                    ~GroupStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection group ID
                     * @return GroupId Connection group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID
                     * @param _groupId Connection group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Connection group name
                     * @return GroupName Connection group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Connection group name
                     * @param _groupName Connection group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取List of connections of a connection group
                     * @return ProxySet List of connections of a connection group
                     * 
                     */
                    std::vector<ProxySimpleInfo> GetProxySet() const;

                    /**
                     * 设置List of connections of a connection group
                     * @param _proxySet List of connections of a connection group
                     * 
                     */
                    void SetProxySet(const std::vector<ProxySimpleInfo>& _proxySet);

                    /**
                     * 判断参数 ProxySet 是否已赋值
                     * @return ProxySet 是否已赋值
                     * 
                     */
                    bool ProxySetHasBeenSet() const;

                private:

                    /**
                     * Connection group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Connection group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * List of connections of a connection group
                     */
                    std::vector<ProxySimpleInfo> m_proxySet;
                    bool m_proxySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_
