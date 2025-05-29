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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_BASECONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_BASECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Application basic configuration.
                */
                class BaseConfig : public AbstractModel
                {
                public:
                    BaseConfig();
                    ~BaseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name.
                     * @return Name Application name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Application name.
                     * @param _name Application name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Application avatar url, required as an input parameter in "CreateApp" and "ModifyApp". Description of input parameter: 1. The image of input URL must be jpeg or png, with a size no more than 500kb, and the URL must allow head requests. 2. If the user does not have object storage, use the "Obtain temporary file upload key" (DescribeStorageCredential) API to obtain the COS temporary key and upload path. Upload the avatar to COS by yourself and get the access link.
                     * @return Avatar Application avatar url, required as an input parameter in "CreateApp" and "ModifyApp". Description of input parameter: 1. The image of input URL must be jpeg or png, with a size no more than 500kb, and the URL must allow head requests. 2. If the user does not have object storage, use the "Obtain temporary file upload key" (DescribeStorageCredential) API to obtain the COS temporary key and upload path. Upload the avatar to COS by yourself and get the access link.
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置Application avatar url, required as an input parameter in "CreateApp" and "ModifyApp". Description of input parameter: 1. The image of input URL must be jpeg or png, with a size no more than 500kb, and the URL must allow head requests. 2. If the user does not have object storage, use the "Obtain temporary file upload key" (DescribeStorageCredential) API to obtain the COS temporary key and upload path. Upload the avatar to COS by yourself and get the access link.
                     * @param _avatar Application avatar url, required as an input parameter in "CreateApp" and "ModifyApp". Description of input parameter: 1. The image of input URL must be jpeg or png, with a size no more than 500kb, and the URL must allow head requests. 2. If the user does not have object storage, use the "Obtain temporary file upload key" (DescribeStorageCredential) API to obtain the COS temporary key and upload path. Upload the avatar to COS by yourself and get the access link.
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取Application description.
                     * @return Desc Application description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Application description.
                     * @param _desc Application description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Application name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Application avatar url, required as an input parameter in "CreateApp" and "ModifyApp". Description of input parameter: 1. The image of input URL must be jpeg or png, with a size no more than 500kb, and the URL must allow head requests. 2. If the user does not have object storage, use the "Obtain temporary file upload key" (DescribeStorageCredential) API to obtain the COS temporary key and upload path. Upload the avatar to COS by yourself and get the access link.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * Application description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_BASECONFIG_H_
