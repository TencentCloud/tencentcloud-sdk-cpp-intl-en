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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMSDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMSDATA_H_

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
                * 
                */
                class ModifyParamsData : public AbstractModel
                {
                public:
                    ModifyParamsData();
                    ~ModifyParamsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取
                     * @return OldValue 
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置
                     * @param _oldValue 
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取
                     * @return CurValue 
                     * 
                     */
                    std::string GetCurValue() const;

                    /**
                     * 设置
                     * @param _curValue 
                     * 
                     */
                    void SetCurValue(const std::string& _curValue);

                    /**
                     * 判断参数 CurValue 是否已赋值
                     * @return CurValue 是否已赋值
                     * 
                     */
                    bool CurValueHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_curValue;
                    bool m_curValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMSDATA_H_
