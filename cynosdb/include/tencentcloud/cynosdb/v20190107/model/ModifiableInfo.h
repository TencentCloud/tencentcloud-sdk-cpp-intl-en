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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFIABLEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFIABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Details of whether the parameter can be modified
                */
                class ModifiableInfo : public AbstractModel
                {
                public:
                    ModifiableInfo();
                    ~ModifiableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return IsModifiable 
                     * 
                     */
                    int64_t GetIsModifiable() const;

                    /**
                     * 设置
                     * @param _isModifiable 
                     * 
                     */
                    void SetIsModifiable(const int64_t& _isModifiable);

                    /**
                     * 判断参数 IsModifiable 是否已赋值
                     * @return IsModifiable 是否已赋值
                     * 
                     */
                    bool IsModifiableHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_isModifiable;
                    bool m_isModifiableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFIABLEINFO_H_
