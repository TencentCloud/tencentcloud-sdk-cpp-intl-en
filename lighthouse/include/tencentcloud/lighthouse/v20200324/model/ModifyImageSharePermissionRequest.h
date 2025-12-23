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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyImageSharePermission request structure.
                */
                class ModifyImageSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifyImageSharePermissionRequest();
                    ~ModifyImageSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.comom/document/api/213/15715?from_cn_redirect=1) API.
                     * @return ImageId Image ID, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.comom/document/api/213/15715?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.comom/document/api/213/15715?from_cn_redirect=1) API.
                     * @param _imageId Image ID, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.comom/document/api/213/15715?from_cn_redirect=1) API.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Sharing property, including SHARE and CANCEL. Among them, SHARE indicates sharing, and CANCEL indicates canceling sharing.
                     * @return Permission Sharing property, including SHARE and CANCEL. Among them, SHARE indicates sharing, and CANCEL indicates canceling sharing.
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Sharing property, including SHARE and CANCEL. Among them, SHARE indicates sharing, and CANCEL indicates canceling sharing.
                     * @param _permission Sharing property, including SHARE and CANCEL. Among them, SHARE indicates sharing, and CANCEL indicates canceling sharing.
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
                     * Image ID, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.comom/document/api/213/15715?from_cn_redirect=1) API.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Sharing property, including SHARE and CANCEL. Among them, SHARE indicates sharing, and CANCEL indicates canceling sharing.
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
