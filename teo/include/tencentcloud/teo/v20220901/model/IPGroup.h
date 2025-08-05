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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPExpireInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP range group
                */
                class IPGroup : public AbstractModel
                {
                public:
                    IPGroup();
                    ~IPGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group ID. Enter `0`.
                     * @return GroupId Group ID. Enter `0`.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Group ID. Enter `0`.
                     * @param _groupId Group ID. Enter `0`.
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
                     * 获取Group name.
                     * @return Name Group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Group name.
                     * @param _name Group name.
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
                     * 获取IP group content, supports ip and ip range.
                     * @return Content IP group content, supports ip and ip range.
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置IP group content, supports ip and ip range.
                     * @param _content IP group content, supports ip and ip range.
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Number of ips or ranges in effect in the IP group. valid as an output parameter, no need to specify this field as an input parameter.
                     * @return IPTotalCount Number of ips or ranges in effect in the IP group. valid as an output parameter, no need to specify this field as an input parameter.
                     * 
                     */
                    int64_t GetIPTotalCount() const;

                    /**
                     * 设置Number of ips or ranges in effect in the IP group. valid as an output parameter, no need to specify this field as an input parameter.
                     * @param _iPTotalCount Number of ips or ranges in effect in the IP group. valid as an output parameter, no need to specify this field as an input parameter.
                     * 
                     */
                    void SetIPTotalCount(const int64_t& _iPTotalCount);

                    /**
                     * 判断参数 IPTotalCount 是否已赋值
                     * @return IPTotalCount 是否已赋值
                     * 
                     */
                    bool IPTotalCountHasBeenSet() const;

                    /**
                     * 获取Specifies the scheduled expiration information of the IP.
Specifies the IP address or IP range configuration with scheduled expiration time as an input parameter.
As an output parameter, contains the following two categories of information.
<Li>Currently not expired scheduled expiration information: expiration configuration not triggered.</li>.
<Li>Scheduled expiration information expired within a week: cache expiration configuration has been triggered.</li>.
                     * @return IPExpireInfo Specifies the scheduled expiration information of the IP.
Specifies the IP address or IP range configuration with scheduled expiration time as an input parameter.
As an output parameter, contains the following two categories of information.
<Li>Currently not expired scheduled expiration information: expiration configuration not triggered.</li>.
<Li>Scheduled expiration information expired within a week: cache expiration configuration has been triggered.</li>.
                     * 
                     */
                    std::vector<IPExpireInfo> GetIPExpireInfo() const;

                    /**
                     * 设置Specifies the scheduled expiration information of the IP.
Specifies the IP address or IP range configuration with scheduled expiration time as an input parameter.
As an output parameter, contains the following two categories of information.
<Li>Currently not expired scheduled expiration information: expiration configuration not triggered.</li>.
<Li>Scheduled expiration information expired within a week: cache expiration configuration has been triggered.</li>.
                     * @param _iPExpireInfo Specifies the scheduled expiration information of the IP.
Specifies the IP address or IP range configuration with scheduled expiration time as an input parameter.
As an output parameter, contains the following two categories of information.
<Li>Currently not expired scheduled expiration information: expiration configuration not triggered.</li>.
<Li>Scheduled expiration information expired within a week: cache expiration configuration has been triggered.</li>.
                     * 
                     */
                    void SetIPExpireInfo(const std::vector<IPExpireInfo>& _iPExpireInfo);

                    /**
                     * 判断参数 IPExpireInfo 是否已赋值
                     * @return IPExpireInfo 是否已赋值
                     * 
                     */
                    bool IPExpireInfoHasBeenSet() const;

                private:

                    /**
                     * Group ID. Enter `0`.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * IP group content, supports ip and ip range.
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Number of ips or ranges in effect in the IP group. valid as an output parameter, no need to specify this field as an input parameter.
                     */
                    int64_t m_iPTotalCount;
                    bool m_iPTotalCountHasBeenSet;

                    /**
                     * Specifies the scheduled expiration information of the IP.
Specifies the IP address or IP range configuration with scheduled expiration time as an input parameter.
As an output parameter, contains the following two categories of information.
<Li>Currently not expired scheduled expiration information: expiration configuration not triggered.</li>.
<Li>Scheduled expiration information expired within a week: cache expiration configuration has been triggered.</li>.
                     */
                    std::vector<IPExpireInfo> m_iPExpireInfo;
                    bool m_iPExpireInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
