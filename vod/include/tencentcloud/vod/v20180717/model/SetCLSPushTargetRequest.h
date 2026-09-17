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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AreaCLSTargetInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetCLSPushTarget request structure.
                */
                class SetCLSPushTargetRequest : public AbstractModel
                {
                public:
                    SetCLSPushTargetRequest();
                    ~SetCLSPushTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Domain 
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置
                     * @param _domain 
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ChineseMainlandCLSTargetInfo 
                     * 
                     */
                    AreaCLSTargetInfo GetChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置
                     * @param _chineseMainlandCLSTargetInfo 
                     * 
                     */
                    void SetChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _chineseMainlandCLSTargetInfo);

                    /**
                     * 判断参数 ChineseMainlandCLSTargetInfo 是否已赋值
                     * @return ChineseMainlandCLSTargetInfo 是否已赋值
                     * 
                     */
                    bool ChineseMainlandCLSTargetInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutsideChineseMainlandCLSTargetInfo 
                     * 
                     */
                    AreaCLSTargetInfo GetOutsideChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置
                     * @param _outsideChineseMainlandCLSTargetInfo 
                     * 
                     */
                    void SetOutsideChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _outsideChineseMainlandCLSTargetInfo);

                    /**
                     * 判断参数 OutsideChineseMainlandCLSTargetInfo 是否已赋值
                     * @return OutsideChineseMainlandCLSTargetInfo 是否已赋值
                     * 
                     */
                    bool OutsideChineseMainlandCLSTargetInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    AreaCLSTargetInfo m_chineseMainlandCLSTargetInfo;
                    bool m_chineseMainlandCLSTargetInfoHasBeenSet;

                    /**
                     * 
                     */
                    AreaCLSTargetInfo m_outsideChineseMainlandCLSTargetInfo;
                    bool m_outsideChineseMainlandCLSTargetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_
