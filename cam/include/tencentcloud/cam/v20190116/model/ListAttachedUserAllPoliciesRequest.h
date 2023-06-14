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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedUserAllPolicies request structure.
                */
                class ListAttachedUserAllPoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedUserAllPoliciesRequest();
                    ~ListAttachedUserAllPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target user ID.
                     * @return TargetUin Target user ID.
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置Target user ID.
                     * @param _targetUin Target user ID.
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取The number of policies displayed on each page. Value range: 1-200.
                     * @return Rp The number of policies displayed on each page. Value range: 1-200.
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置The number of policies displayed on each page. Value range: 1-200.
                     * @param _rp The number of policies displayed on each page. Value range: 1-200.
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取Page number. Value range: 1-200.
                     * @return Page Page number. Value range: 1-200.
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number. Value range: 1-200.
                     * @param _page Page number. Value range: 1-200.
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取`0`: return policies that are directly associated and inherited from the user group; `1`: return policies that are directly associated; `2`: return policies inherited from the user group.
                     * @return AttachType `0`: return policies that are directly associated and inherited from the user group; `1`: return policies that are directly associated; `2`: return policies inherited from the user group.
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置`0`: return policies that are directly associated and inherited from the user group; `1`: return policies that are directly associated; `2`: return policies inherited from the user group.
                     * @param _attachType `0`: return policies that are directly associated and inherited from the user group; `1`: return policies that are directly associated; `2`: return policies inherited from the user group.
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                    /**
                     * 获取Policy type.
                     * @return StrategyType Policy type.
                     * 
                     */
                    uint64_t GetStrategyType() const;

                    /**
                     * 设置Policy type.
                     * @param _strategyType Policy type.
                     * 
                     */
                    void SetStrategyType(const uint64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Keyword for searching.
                     * @return Keyword Keyword for searching.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword for searching.
                     * @param _keyword Keyword for searching.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Target user ID.
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * The number of policies displayed on each page. Value range: 1-200.
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Page number. Value range: 1-200.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * `0`: return policies that are directly associated and inherited from the user group; `1`: return policies that are directly associated; `2`: return policies inherited from the user group.
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * Policy type.
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Keyword for searching.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_
