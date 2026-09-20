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
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
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
                     * 获取Push target to set for logs in the Chinese mainland.
                     * @return ChineseMainlandCLSTargetInfo Push target to set for logs in the Chinese mainland.
                     * 
                     */
                    AreaCLSTargetInfo GetChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置Push target to set for logs in the Chinese mainland.
                     * @param _chineseMainlandCLSTargetInfo Push target to set for logs in the Chinese mainland.
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
                     * 获取Push target for logs outside the Chinese mainland to be set.
                     * @return OutsideChineseMainlandCLSTargetInfo Push target for logs outside the Chinese mainland to be set.
                     * 
                     */
                    AreaCLSTargetInfo GetOutsideChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置Push target for logs outside the Chinese mainland to be set.
                     * @param _outsideChineseMainlandCLSTargetInfo Push target for logs outside the Chinese mainland to be set.
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
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Push target to set for logs in the Chinese mainland.
                     */
                    AreaCLSTargetInfo m_chineseMainlandCLSTargetInfo;
                    bool m_chineseMainlandCLSTargetInfoHasBeenSet;

                    /**
                     * Push target for logs outside the Chinese mainland to be set.
                     */
                    AreaCLSTargetInfo m_outsideChineseMainlandCLSTargetInfo;
                    bool m_outsideChineseMainlandCLSTargetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_
