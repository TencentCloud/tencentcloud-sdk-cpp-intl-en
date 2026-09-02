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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRLOGCOLLECTPATHREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRLOGCOLLECTPATHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogAppCollectPath.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEdrLogCollectPath request structure.
                */
                class ModifyEdrLogCollectPathRequest : public AbstractModel
                {
                public:
                    ModifyEdrLogCollectPathRequest();
                    ~ModifyEdrLogCollectPathRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Collection path, up to 1000 entries.</p>
                     * @return Paths <p>Collection path, up to 1000 entries.</p>
                     * 
                     */
                    std::vector<LogAppCollectPath> GetPaths() const;

                    /**
                     * 设置<p>Collection path, up to 1000 entries.</p>
                     * @param _paths <p>Collection path, up to 1000 entries.</p>
                     * 
                     */
                    void SetPaths(const std::vector<LogAppCollectPath>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Collection path, up to 1000 entries.</p>
                     */
                    std::vector<LogAppCollectPath> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRLOGCOLLECTPATHREQUEST_H_
