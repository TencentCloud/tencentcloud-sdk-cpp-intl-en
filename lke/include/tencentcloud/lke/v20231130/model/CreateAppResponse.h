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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateApp response structure.
                */
                class CreateAppResponse : public AbstractModel
                {
                public:
                    CreateAppResponse();
                    ~CreateAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return AppBizId Application ID.
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取Whether the account application list permissions are customized. A user interaction prompt.
                     * @return IsCustomList Whether the account application list permissions are customized. A user interaction prompt.
                     * 
                     */
                    bool GetIsCustomList() const;

                    /**
                     * 判断参数 IsCustomList 是否已赋值
                     * @return IsCustomList 是否已赋值
                     * 
                     */
                    bool IsCustomListHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * Whether the account application list permissions are customized. A user interaction prompt.
                     */
                    bool m_isCustomList;
                    bool m_isCustomListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPRESPONSE_H_
