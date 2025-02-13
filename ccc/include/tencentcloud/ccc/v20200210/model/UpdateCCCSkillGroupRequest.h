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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * UpdateCCCSkillGroup request structure.
                */
                class UpdateCCCSkillGroupRequest : public AbstractModel
                {
                public:
                    UpdateCCCSkillGroupRequest();
                    ~UpdateCCCSkillGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Skill group id.
                     * @return SkillGroupID Skill group id.
                     * 
                     */
                    int64_t GetSkillGroupID() const;

                    /**
                     * 设置Skill group id.
                     * @param _skillGroupID Skill group id.
                     * 
                     */
                    void SetSkillGroupID(const int64_t& _skillGroupID);

                    /**
                     * 判断参数 SkillGroupID 是否已赋值
                     * @return SkillGroupID 是否已赋值
                     * 
                     */
                    bool SkillGroupIDHasBeenSet() const;

                    /**
                     * 获取Modified skill group name.
                     * @return SkillGroupName Modified skill group name.
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置Modified skill group name.
                     * @param _skillGroupName Modified skill group name.
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取Modified maximum concurrency, with the maximum synchronization being 2.
                     * @return MaxConcurrency Modified maximum concurrency, with the maximum synchronization being 2.
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置Modified maximum concurrency, with the maximum synchronization being 2.
                     * @param _maxConcurrency Modified maximum concurrency, with the maximum synchronization being 2.
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取True for simultaneous ringing, false for sequential ringing.
                     * @return RingAll True for simultaneous ringing, false for sequential ringing.
                     * 
                     */
                    bool GetRingAll() const;

                    /**
                     * 设置True for simultaneous ringing, false for sequential ringing.
                     * @param _ringAll True for simultaneous ringing, false for sequential ringing.
                     * 
                     */
                    void SetRingAll(const bool& _ringAll);

                    /**
                     * 判断参数 RingAll 是否已赋值
                     * @return RingAll 是否已赋值
                     * 
                     */
                    bool RingAllHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupID;
                    bool m_skillGroupIDHasBeenSet;

                    /**
                     * Modified skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * Modified maximum concurrency, with the maximum synchronization being 2.
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * True for simultaneous ringing, false for sequential ringing.
                     */
                    bool m_ringAll;
                    bool m_ringAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_
