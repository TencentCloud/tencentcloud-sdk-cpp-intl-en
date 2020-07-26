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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFOLIST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/DomainDetailInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Multi-domain name information list
                */
                class DomainInfoList : public AbstractModel
                {
                public:
                    DomainInfoList();
                    ~DomainInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param Domain Domain name.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Details.
                     * @return DetailInfoList Details.
                     */
                    std::vector<DomainDetailInfo> GetDetailInfoList() const;

                    /**
                     * 设置Details.
                     * @param DetailInfoList Details.
                     */
                    void SetDetailInfoList(const std::vector<DomainDetailInfo>& _detailInfoList);

                    /**
                     * 判断参数 DetailInfoList 是否已赋值
                     * @return DetailInfoList 是否已赋值
                     */
                    bool DetailInfoListHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Details.
                     */
                    std::vector<DomainDetailInfo> m_detailInfoList;
                    bool m_detailInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFOLIST_H_
