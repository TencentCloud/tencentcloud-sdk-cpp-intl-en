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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchAssignVLPlanChannels request structure.
                */
                class BatchAssignVLPlanChannelsRequest : public AbstractModel
                {
                public:
                    BatchAssignVLPlanChannelsRequest();
                    ~BatchAssignVLPlanChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plan ID</p>
                     * @return VLPlanId <p>Plan ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>Plan ID</p>
                     * @param _vLPlanId <p>Plan ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>Operation command: 1=associate, 2=unbind</p>
                     * @return Cmd <p>Operation command: 1=associate, 2=unbind</p>
                     * 
                     */
                    int64_t GetCmd() const;

                    /**
                     * 设置<p>Operation command: 1=associate, 2=unbind</p>
                     * @param _cmd <p>Operation command: 1=associate, 2=unbind</p>
                     * 
                     */
                    void SetCmd(const int64_t& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取<p>Channel ID list, up to 500; pass at least one of this parameter and OrganizationIds (when Cmd=1)</p>
                     * @return ChannelIds <p>Channel ID list, up to 500; pass at least one of this parameter and OrganizationIds (when Cmd=1)</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置<p>Channel ID list, up to 500; pass at least one of this parameter and OrganizationIds (when Cmd=1)</p>
                     * @param _channelIds <p>Channel ID list, up to 500; pass at least one of this parameter and OrganizationIds (when Cmd=1)</p>
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取<p>List of organization IDs (valid only when Cmd=1; does not allow input when Cmd=2); unfold all channels under the organization to participate in association, and take the union with ChannelIds and remove duplicates</p>
                     * @return OrganizationIds <p>List of organization IDs (valid only when Cmd=1; does not allow input when Cmd=2); unfold all channels under the organization to participate in association, and take the union with ChannelIds and remove duplicates</p>
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置<p>List of organization IDs (valid only when Cmd=1; does not allow input when Cmd=2); unfold all channels under the organization to participate in association, and take the union with ChannelIds and remove duplicates</p>
                     * @param _organizationIds <p>List of organization IDs (valid only when Cmd=1; does not allow input when Cmd=2); unfold all channels under the organization to participate in association, and take the union with ChannelIds and remove duplicates</p>
                     * 
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Plan ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>Operation command: 1=associate, 2=unbind</p>
                     */
                    int64_t m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>Channel ID list, up to 500; pass at least one of this parameter and OrganizationIds (when Cmd=1)</p>
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * <p>List of organization IDs (valid only when Cmd=1; does not allow input when Cmd=2); unfold all channels under the organization to participate in association, and take the union with ChannelIds and remove duplicates</p>
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_
