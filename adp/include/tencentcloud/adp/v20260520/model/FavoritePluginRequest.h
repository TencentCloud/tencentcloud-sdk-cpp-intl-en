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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FAVORITEPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FAVORITEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * FavoritePlugin request structure.
                */
                class FavoritePluginRequest : public AbstractModel
                {
                public:
                    FavoritePluginRequest();
                    ~FavoritePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plugin_id</p>
                     * @return PluginId <p>Plugin_id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Plugin_id</p>
                     * @param _pluginId <p>Plugin_id</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>Current workspace id</p>
                     * @return SpaceId <p>Current workspace id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Current workspace id</p>
                     * @param _spaceId <p>Current workspace id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Plugin_id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Current workspace id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FAVORITEPLUGINREQUEST_H_
