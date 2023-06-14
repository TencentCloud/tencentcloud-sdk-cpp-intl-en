/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * AddRealServers request structure.
                */
                class AddRealServersRequest : public AbstractModel
                {
                public:
                    AddRealServersRequest();
                    ~AddRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID corresponding to origin server
                     * @return ProjectId Project ID corresponding to origin server
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID corresponding to origin server
                     * @param _projectId Project ID corresponding to origin server
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取IP or domain name corresponding to origin server
                     * @return RealServerIP IP or domain name corresponding to origin server
                     * 
                     */
                    std::vector<std::string> GetRealServerIP() const;

                    /**
                     * 设置IP or domain name corresponding to origin server
                     * @param _realServerIP IP or domain name corresponding to origin server
                     * 
                     */
                    void SetRealServerIP(const std::vector<std::string>& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取Name of the origin server
                     * @return RealServerName Name of the origin server
                     * 
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置Name of the origin server
                     * @param _realServerName Name of the origin server
                     * 
                     */
                    void SetRealServerName(const std::string& _realServerName);

                    /**
                     * 判断参数 RealServerName 是否已赋值
                     * @return RealServerName 是否已赋值
                     * 
                     */
                    bool RealServerNameHasBeenSet() const;

                    /**
                     * 获取List of tags
                     * @return TagSet List of tags
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置List of tags
                     * @param _tagSet List of tags
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * Project ID corresponding to origin server
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * IP or domain name corresponding to origin server
                     */
                    std::vector<std::string> m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * Name of the origin server
                     */
                    std::string m_realServerName;
                    bool m_realServerNameHasBeenSet;

                    /**
                     * List of tags
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_
