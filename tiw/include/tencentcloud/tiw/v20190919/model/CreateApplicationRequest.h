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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Tag.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateApplication request structure.
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Application name.
                     * @return AppName Application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name.
                     * @param _appName Application name.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取SKey required for creating an IM application.
                     * @return SKey SKey required for creating an IM application.
                     * 
                     */
                    std::string GetSKey() const;

                    /**
                     * 设置SKey required for creating an IM application.
                     * @param _sKey SKey required for creating an IM application.
                     * 
                     */
                    void SetSKey(const std::string& _sKey);

                    /**
                     * 判断参数 SKey 是否已赋值
                     * @return SKey 是否已赋值
                     * 
                     */
                    bool SKeyHasBeenSet() const;

                    /**
                     * 获取TinyId required for creating an IM application.
                     * @return TinyId TinyId required for creating an IM application.
                     * 
                     */
                    std::string GetTinyId() const;

                    /**
                     * 设置TinyId required for creating an IM application.
                     * @param _tinyId TinyId required for creating an IM application.
                     * 
                     */
                    void SetTinyId(const std::string& _tinyId);

                    /**
                     * 判断参数 TinyId 是否已赋值
                     * @return TinyId 是否已赋值
                     * 
                     */
                    bool TinyIdHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound.
                     * @return TagList List of tags to be bound.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置List of tags to be bound.
                     * @param _tagList List of tags to be bound.
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * SKey required for creating an IM application.
                     */
                    std::string m_sKey;
                    bool m_sKeyHasBeenSet;

                    /**
                     * TinyId required for creating an IM application.
                     */
                    std::string m_tinyId;
                    bool m_tinyIdHasBeenSet;

                    /**
                     * List of tags to be bound.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_
