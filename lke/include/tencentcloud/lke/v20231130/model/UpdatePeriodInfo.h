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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class UpdatePeriodInfo : public AbstractModel
                {
                public:
                    UpdatePeriodInfo();
                    ~UpdatePeriodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return UpdatePeriodH 
                     * 
                     */
                    uint64_t GetUpdatePeriodH() const;

                    /**
                     * 设置
                     * @param _updatePeriodH 
                     * 
                     */
                    void SetUpdatePeriodH(const uint64_t& _updatePeriodH);

                    /**
                     * 判断参数 UpdatePeriodH 是否已赋值
                     * @return UpdatePeriodH 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_updatePeriodH;
                    bool m_updatePeriodHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_
