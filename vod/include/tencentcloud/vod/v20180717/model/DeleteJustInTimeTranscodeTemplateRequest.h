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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteJustInTimeTranscodeTemplate request structure.
                */
                class DeleteJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    DeleteJustInTimeTranscodeTemplateRequest();
                    ~DeleteJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name.
                     * @return Name Template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name.
                     * @param _name Template name.
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
                     * 获取<b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * @return SubAppId <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * @param _subAppId <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
