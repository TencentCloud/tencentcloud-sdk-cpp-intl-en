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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmIdentifyRuleStatus request structure.
                */
                class ModifyDspmIdentifyRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyDspmIdentifyRuleStatusRequest();
                    ~ModifyDspmIdentifyRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Data item id</p>
                     * @return Ids <p>Data item id</p>
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置<p>Data item id</p>
                     * @param _ids <p>Data item id</p>
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取<p>Data item status</p><p>Enumeration values:</p><ul><li>0: off</li><li>1: on</li></ul>
                     * @return Status <p>Data item status</p><p>Enumeration values:</p><ul><li>0: off</li><li>1: on</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Data item status</p><p>Enumeration values:</p><ul><li>0: off</li><li>1: on</li></ul>
                     * @param _status <p>Data item status</p><p>Enumeration values:</p><ul><li>0: off</li><li>1: on</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取<p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @return OperationSource <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    std::string GetOperationSource() const;

                    /**
                     * 设置<p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @param _operationSource <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    void SetOperationSource(const std::string& _operationSource);

                    /**
                     * 判断参数 OperationSource 是否已赋值
                     * @return OperationSource 是否已赋值
                     * 
                     */
                    bool OperationSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Data item id</p>
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * <p>Data item status</p><p>Enumeration values:</p><ul><li>0: off</li><li>1: on</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULESTATUSREQUEST_H_
