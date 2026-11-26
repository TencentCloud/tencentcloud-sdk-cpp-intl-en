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
                     * 获取<p>IP group Id. Enter 0 upon creation.</p>
                     * @return GroupId <p>IP group Id. Enter 0 upon creation.</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>IP group Id. Enter 0 upon creation.</p>
                     * @param _groupId <p>IP group Id. Enter 0 upon creation.</p>
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
                     * 获取<p>IP group name.</p>
                     * @return Name <p>IP group name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>IP group name.</p>
                     * @param _name <p>IP group name.</p>
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
                     * 获取<p>IP group content. Only IP and IP range are supported.</p>
                     * @return Content <p>IP group content. Only IP and IP range are supported.</p>
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置<p>IP group content. Only IP and IP range are supported.</p>
                     * @param _content <p>IP group content. Only IP and IP range are supported.</p>
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
                     * 获取<p>Number of IPs or IP ranges currently effective in the IP group. Valid as an output parameter. As an input parameter, no need to specify this field.</p>
                     * @return IPTotalCount <p>Number of IPs or IP ranges currently effective in the IP group. Valid as an output parameter. As an input parameter, no need to specify this field.</p>
                     * 
                     */
                    int64_t GetIPTotalCount() const;

                    /**
                     * 设置<p>Number of IPs or IP ranges currently effective in the IP group. Valid as an output parameter. As an input parameter, no need to specify this field.</p>
                     * @param _iPTotalCount <p>Number of IPs or IP ranges currently effective in the IP group. Valid as an output parameter. As an input parameter, no need to specify this field.</p>
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
                     * 获取<p>IP scheduled expiration info.<br>As an input parameter, it is used to specify a scheduled expiration time for an IP address or IP range.<br>As an output parameter, it includes the following two categories of info:</p><li>Current scheduled expiration info that has not expired: expiration configuration that has not been triggered.</li><li>Scheduled expiration info that has expired within a week: expiration configuration that has been triggered.</li>
                     * @return IPExpireInfo <p>IP scheduled expiration info.<br>As an input parameter, it is used to specify a scheduled expiration time for an IP address or IP range.<br>As an output parameter, it includes the following two categories of info:</p><li>Current scheduled expiration info that has not expired: expiration configuration that has not been triggered.</li><li>Scheduled expiration info that has expired within a week: expiration configuration that has been triggered.</li>
                     * 
                     */
                    std::vector<IPExpireInfo> GetIPExpireInfo() const;

                    /**
                     * 设置<p>IP scheduled expiration info.<br>As an input parameter, it is used to specify a scheduled expiration time for an IP address or IP range.<br>As an output parameter, it includes the following two categories of info:</p><li>Current scheduled expiration info that has not expired: expiration configuration that has not been triggered.</li><li>Scheduled expiration info that has expired within a week: expiration configuration that has been triggered.</li>
                     * @param _iPExpireInfo <p>IP scheduled expiration info.<br>As an input parameter, it is used to specify a scheduled expiration time for an IP address or IP range.<br>As an output parameter, it includes the following two categories of info:</p><li>Current scheduled expiration info that has not expired: expiration configuration that has not been triggered.</li><li>Scheduled expiration info that has expired within a week: expiration configuration that has been triggered.</li>
                     * 
                     */
                    void SetIPExpireInfo(const std::vector<IPExpireInfo>& _iPExpireInfo);

                    /**
                     * 判断参数 IPExpireInfo 是否已赋值
                     * @return IPExpireInfo 是否已赋值
                     * 
                     */
                    bool IPExpireInfoHasBeenSet() const;

                    /**
                     * 获取<p>The number of times the IP group is referenced.</p>
                     * @return RefCount <p>The number of times the IP group is referenced.</p>
                     * 
                     */
                    int64_t GetRefCount() const;

                    /**
                     * 设置<p>The number of times the IP group is referenced.</p>
                     * @param _refCount <p>The number of times the IP group is referenced.</p>
                     * 
                     */
                    void SetRefCount(const int64_t& _refCount);

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                private:

                    /**
                     * <p>IP group Id. Enter 0 upon creation.</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>IP group name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>IP group content. Only IP and IP range are supported.</p>
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Number of IPs or IP ranges currently effective in the IP group. Valid as an output parameter. As an input parameter, no need to specify this field.</p>
                     */
                    int64_t m_iPTotalCount;
                    bool m_iPTotalCountHasBeenSet;

                    /**
                     * <p>IP scheduled expiration info.<br>As an input parameter, it is used to specify a scheduled expiration time for an IP address or IP range.<br>As an output parameter, it includes the following two categories of info:</p><li>Current scheduled expiration info that has not expired: expiration configuration that has not been triggered.</li><li>Scheduled expiration info that has expired within a week: expiration configuration that has been triggered.</li>
                     */
                    std::vector<IPExpireInfo> m_iPExpireInfo;
                    bool m_iPExpireInfoHasBeenSet;

                    /**
                     * <p>The number of times the IP group is referenced.</p>
                     */
                    int64_t m_refCount;
                    bool m_refCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
