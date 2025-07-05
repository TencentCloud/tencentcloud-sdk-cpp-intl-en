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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CONFIGALIASESINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CONFIGALIASESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/AliasValueConf.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Parameter configuration.
                */
                class ConfigAliasesInfo : public AbstractModel
                {
                public:
                    ConfigAliasesInfo();
                    ~ConfigAliasesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取parameter name.
                     * @return ParamName parameter name.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置parameter name.
                     * @param _paramName parameter name.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Alias-value configuration.
                     * @return AliasValueList Alias-value configuration.
                     * 
                     */
                    std::vector<AliasValueConf> GetAliasValueList() const;

                    /**
                     * 设置Alias-value configuration.
                     * @param _aliasValueList Alias-value configuration.
                     * 
                     */
                    void SetAliasValueList(const std::vector<AliasValueConf>& _aliasValueList);

                    /**
                     * 判断参数 AliasValueList 是否已赋值
                     * @return AliasValueList 是否已赋值
                     * 
                     */
                    bool AliasValueListHasBeenSet() const;

                private:

                    /**
                     * parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Alias-value configuration.
                     */
                    std::vector<AliasValueConf> m_aliasValueList;
                    bool m_aliasValueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CONFIGALIASESINFO_H_
