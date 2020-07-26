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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMMODIFYRESULT_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMMODIFYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Parameter modification result
                */
                class ParamModifyResult : public AbstractModel
                {
                public:
                    ParamModifyResult();
                    ~ParamModifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Renames a parameter
                     * @return Param Renames a parameter
                     */
                    std::string GetParam() const;

                    /**
                     * 设置Renames a parameter
                     * @param Param Renames a parameter
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取Result of parameter modification. 0: success; -1: failure; -2: invalid parameter value
                     * @return Code Result of parameter modification. 0: success; -1: failure; -2: invalid parameter value
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Result of parameter modification. 0: success; -1: failure; -2: invalid parameter value
                     * @param Code Result of parameter modification. 0: success; -1: failure; -2: invalid parameter value
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * Renames a parameter
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Result of parameter modification. 0: success; -1: failure; -2: invalid parameter value
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMMODIFYRESULT_H_
