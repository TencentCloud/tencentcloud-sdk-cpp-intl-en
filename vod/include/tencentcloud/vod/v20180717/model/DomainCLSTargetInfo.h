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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Push a domain name to a CLS destination.
                */
                class DomainCLSTargetInfo : public AbstractModel
                {
                public:
                    DomainCLSTargetInfo();
                    ~DomainCLSTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Log push target in the Chinese mainland.
                     * @return ChineseMainlandCLSTargetInfo Log push target in the Chinese mainland.
                     * 
                     */
                    AreaCLSTargetInfo GetChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置Log push target in the Chinese mainland.
                     * @param _chineseMainlandCLSTargetInfo Log push target in the Chinese mainland.
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
                     * 获取Log push targets outside the Chinese mainland.
                     * @return OutsideChineseMainlandCLSTargetInfo Log push targets outside the Chinese mainland.
                     * 
                     */
                    AreaCLSTargetInfo GetOutsideChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置Log push targets outside the Chinese mainland.
                     * @param _outsideChineseMainlandCLSTargetInfo Log push targets outside the Chinese mainland.
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
                     * Log push target in the Chinese mainland.
                     */
                    AreaCLSTargetInfo m_chineseMainlandCLSTargetInfo;
                    bool m_chineseMainlandCLSTargetInfoHasBeenSet;

                    /**
                     * Log push targets outside the Chinese mainland.
                     */
                    AreaCLSTargetInfo m_outsideChineseMainlandCLSTargetInfo;
                    bool m_outsideChineseMainlandCLSTargetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_
