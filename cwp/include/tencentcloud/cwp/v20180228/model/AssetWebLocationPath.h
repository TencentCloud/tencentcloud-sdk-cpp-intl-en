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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Virtual directory of the asset management web site
                */
                class AssetWebLocationPath : public AbstractModel
                {
                public:
                    AssetWebLocationPath();
                    ~AssetWebLocationPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Virtual path
                     * @return VirtualPath Virtual path
                     * 
                     */
                    std::string GetVirtualPath() const;

                    /**
                     * 设置Virtual path
                     * @param _virtualPath Virtual path
                     * 
                     */
                    void SetVirtualPath(const std::string& _virtualPath);

                    /**
                     * 判断参数 VirtualPath 是否已赋值
                     * @return VirtualPath 是否已赋值
                     * 
                     */
                    bool VirtualPathHasBeenSet() const;

                    /**
                     * 获取Physical path
                     * @return RealPath Physical path
                     * 
                     */
                    std::string GetRealPath() const;

                    /**
                     * 设置Physical path
                     * @param _realPath Physical path
                     * 
                     */
                    void SetRealPath(const std::string& _realPath);

                    /**
                     * 判断参数 RealPath 是否已赋值
                     * @return RealPath 是否已赋值
                     * 
                     */
                    bool RealPathHasBeenSet() const;

                    /**
                     * 获取File owner
                     * @return User File owner
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置File owner
                     * @param _user File owner
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取File group
                     * @return Group File group
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置File group
                     * @param _group File group
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取File permission
                     * @return Permission File permission
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置File permission
                     * @param _permission File permission
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * Virtual path
                     */
                    std::string m_virtualPath;
                    bool m_virtualPathHasBeenSet;

                    /**
                     * Physical path
                     */
                    std::string m_realPath;
                    bool m_realPathHasBeenSet;

                    /**
                     * File owner
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * File group
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * File permission
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_
