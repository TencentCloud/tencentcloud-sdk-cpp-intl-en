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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Dspm identity associated asset statistics
                */
                class DspmIdentifyAssetStatistic : public AbstractModel
                {
                public:
                    DspmIdentifyAssetStatistic();
                    ~DspmIdentifyAssetStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of asset administrators associated.
                     * @return ManagerCount Number of asset administrators associated.
                     * 
                     */
                    int64_t GetManagerCount() const;

                    /**
                     * 设置Number of asset administrators associated.
                     * @param _managerCount Number of asset administrators associated.
                     * 
                     */
                    void SetManagerCount(const int64_t& _managerCount);

                    /**
                     * 判断参数 ManagerCount 是否已赋值
                     * @return ManagerCount 是否已赋值
                     * 
                     */
                    bool ManagerCountHasBeenSet() const;

                    /**
                     * 获取Number of ordinary members of associated assets.
                     * @return MemberCount Number of ordinary members of associated assets.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of ordinary members of associated assets.
                     * @param _memberCount Number of ordinary members of associated assets.
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                private:

                    /**
                     * Number of asset administrators associated.
                     */
                    int64_t m_managerCount;
                    bool m_managerCountHasBeenSet;

                    /**
                     * Number of ordinary members of associated assets.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_
