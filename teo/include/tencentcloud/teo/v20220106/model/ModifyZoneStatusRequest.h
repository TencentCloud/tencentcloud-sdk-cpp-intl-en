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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZoneStatus request structure.
                */
                class ModifyZoneStatusRequest : public AbstractModel
                {
                public:
                    ModifyZoneStatusRequest();
                    ~ModifyZoneStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return Id Site ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Site ID
                     * @param _id Site ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Site status.
- `false`: Enable the site.
- `true`: Disable the site.
                     * @return Paused Site status.
- `false`: Enable the site.
- `true`: Disable the site.
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置Site status.
- `false`: Enable the site.
- `true`: Disable the site.
                     * @param _paused Site status.
- `false`: Enable the site.
- `true`: Disable the site.
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Site status.
- `false`: Enable the site.
- `true`: Disable the site.
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSREQUEST_H_
