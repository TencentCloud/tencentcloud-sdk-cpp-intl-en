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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Parameters
                */
                class ParamInfo : public AbstractModel
                {
                public:
                    ParamInfo();
                    ~ParamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter Name
                     * @return ParamKey Parameter Name
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置Parameter Name
                     * @param _paramKey Parameter Name
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取Parameter Value
                     * @return ParamValue Parameter Value
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置Parameter Value
                     * @param _paramValue Parameter Value
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                private:

                    /**
                     * Parameter Name
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * Parameter Value
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMINFO_H_
