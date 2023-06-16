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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class ForceRedirect : public AbstractModel
                {
                public:
                    ForceRedirect();
                    ~ForceRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return RedirectType 
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置
                     * @param _redirectType 
                     * 
                     */
                    void SetRedirectType(const std::string& _redirectType);

                    /**
                     * 判断参数 RedirectType 是否已赋值
                     * @return RedirectType 是否已赋值
                     * 
                     */
                    bool RedirectTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RedirectStatusCode 
                     * 
                     */
                    uint64_t GetRedirectStatusCode() const;

                    /**
                     * 设置
                     * @param _redirectStatusCode 
                     * 
                     */
                    void SetRedirectStatusCode(const uint64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CarryHeaders 
                     * 
                     */
                    std::string GetCarryHeaders() const;

                    /**
                     * 设置
                     * @param _carryHeaders 
                     * 
                     */
                    void SetCarryHeaders(const std::string& _carryHeaders);

                    /**
                     * 判断参数 CarryHeaders 是否已赋值
                     * @return CarryHeaders 是否已赋值
                     * 
                     */
                    bool CarryHeadersHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_carryHeaders;
                    bool m_carryHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_
