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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANEDRTASKAGAINREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANEDRTASKAGAINREQUEST_H_

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
                * ScanEDRTaskAgain request structure.
                */
                class ScanEDRTaskAgainRequest : public AbstractModel
                {
                public:
                    ScanEDRTaskAgainRequest();
                    ~ScanEDRTaskAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Original task ID.</p>
                     * @return TaskId <p>Original task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>Original task ID.</p>
                     * @param _taskId <p>Original task ID.</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * 获取<p>Host Quuid or ContainerID (passed for single asset rescan on the details page; if empty, a full rescan is performed)</p>
                     * @return AssetId <p>Host Quuid or ContainerID (passed for single asset rescan on the details page; if empty, a full rescan is performed)</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Host Quuid or ContainerID (passed for single asset rescan on the details page; if empty, a full rescan is performed)</p>
                     * @param _assetId <p>Host Quuid or ContainerID (passed for single asset rescan on the details page; if empty, a full rescan is performed)</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                private:

                    /**
                     * <p>Original task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Host Quuid or ContainerID (passed for single asset rescan on the details page; if empty, a full rescan is performed)</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANEDRTASKAGAINREQUEST_H_
