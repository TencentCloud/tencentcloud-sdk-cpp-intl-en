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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTQUERYSTRING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTQUERYSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Access URL redirect configuration parameters.
                */
                class AccessURLRedirectQueryString : public AbstractModel
                {
                public:
                    AccessURLRedirectQueryString();
                    ~AccessURLRedirectQueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to be executed. values:.
<Li>`Full`: retain all</li>.
<Li>`Ignore`: ignore all</li>.
                     * @return Action Action to be executed. values:.
<Li>`Full`: retain all</li>.
<Li>`Ignore`: ignore all</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. values:.
<Li>`Full`: retain all</li>.
<Li>`Ignore`: ignore all</li>.
                     * @param _action Action to be executed. values:.
<Li>`Full`: retain all</li>.
<Li>`Ignore`: ignore all</li>.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Action to be executed. values:.
<Li>`Full`: retain all</li>.
<Li>`Ignore`: ignore all</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTQUERYSTRING_H_
