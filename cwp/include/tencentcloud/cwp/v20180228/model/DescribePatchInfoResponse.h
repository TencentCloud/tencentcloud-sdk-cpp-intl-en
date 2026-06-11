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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RelateVulInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePatchInfo response structure.
                */
                class DescribePatchInfoResponse : public AbstractModel
                {
                public:
                    DescribePatchInfoResponse();
                    ~DescribePatchInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取kb No.
                     * @return KbNo kb No.
                     * 
                     */
                    std::string GetKbNo() const;

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取kb name
                     * @return PatchName kb name
                     * 
                     */
                    std::string GetPatchName() const;

                    /**
                     * 判断参数 PatchName 是否已赋值
                     * @return PatchName 是否已赋值
                     * 
                     */
                    bool PatchNameHasBeenSet() const;

                    /**
                     * 获取kb release date
                     * @return PublishTime kb release date
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return ReferUrl Reference link
                     * 
                     */
                    std::string GetReferUrl() const;

                    /**
                     * 判断参数 ReferUrl 是否已赋值
                     * @return ReferUrl 是否已赋值
                     * 
                     */
                    bool ReferUrlHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VulCount Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取List of vulnerability details associated with the patch
                     * @return RelateVulInfoList List of vulnerability details associated with the patch
                     * 
                     */
                    std::vector<RelateVulInfo> GetRelateVulInfoList() const;

                    /**
                     * 判断参数 RelateVulInfoList 是否已赋值
                     * @return RelateVulInfoList 是否已赋值
                     * 
                     */
                    bool RelateVulInfoListHasBeenSet() const;

                    /**
                     * 获取Patch ID
                     * @return KbId Patch ID
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取Associated vulnerability CveId, multiple IDs split by ","
                     * @return RelateVulCveId Associated vulnerability CveId, multiple IDs split by ","
                     * 
                     */
                    std::string GetRelateVulCveId() const;

                    /**
                     * 判断参数 RelateVulCveId 是否已赋值
                     * @return RelateVulCveId 是否已赋值
                     * 
                     */
                    bool RelateVulCveIdHasBeenSet() const;

                private:

                    /**
                     * kb No.
                     */
                    std::string m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * kb name
                     */
                    std::string m_patchName;
                    bool m_patchNameHasBeenSet;

                    /**
                     * kb release date
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_referUrl;
                    bool m_referUrlHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * List of vulnerability details associated with the patch
                     */
                    std::vector<RelateVulInfo> m_relateVulInfoList;
                    bool m_relateVulInfoListHasBeenSet;

                    /**
                     * Patch ID
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * Associated vulnerability CveId, multiple IDs split by ","
                     */
                    std::string m_relateVulCveId;
                    bool m_relateVulCveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_
