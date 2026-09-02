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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOUNT_H_

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
                * Dspm identity statistical information
                */
                class DspmIdentifyCount : public AbstractModel
                {
                public:
                    DspmIdentifyCount();
                    ~DspmIdentifyCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @return IdentifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @param _identifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取Count.
                     * @return Count Count.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Count.
                     * @param _count Count.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * Count.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOUNT_H_
