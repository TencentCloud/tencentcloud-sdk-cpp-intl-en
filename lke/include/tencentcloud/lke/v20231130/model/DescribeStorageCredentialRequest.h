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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_

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
                * DescribeStorageCredential request structure.
                */
                class DescribeStorageCredentialRequest : public AbstractModel
                {
                public:
                    DescribeStorageCredentialRequest();
                    ~DescribeStorageCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID. The parameter still needs to be filled in. Different combinations of parameters will result in different permissions. For details, see https://cloud.tencent.com/document/product/1759/116238.
                     * @return BotBizId Application ID. The parameter still needs to be filled in. Different combinations of parameters will result in different permissions. For details, see https://cloud.tencent.com/document/product/1759/116238.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID. The parameter still needs to be filled in. Different combinations of parameters will result in different permissions. For details, see https://cloud.tencent.com/document/product/1759/116238.
                     * @param _botBizId Application ID. The parameter still needs to be filled in. Different combinations of parameters will result in different permissions. For details, see https://cloud.tencent.com/document/product/1759/116238.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取File type, normal file name type suffixes, such as xlsx, pdf, docx, png, etc.
                     * @return FileType File type, normal file name type suffixes, such as xlsx, pdf, docx, png, etc.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type, normal file name type suffixes, such as xlsx, pdf, docx, png, etc.
                     * @param _fileType File type, normal file name type suffixes, such as xlsx, pdf, docx, png, etc.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is used to select a scenario when uploading a file or an image. When uploading an image in a chat, "Ispublic" is "true." When uploading a file (including files in the document library, images, etc. and files in a chat), "Ispublic" is "false."

                     * @return IsPublic This parameter is used to select a scenario when uploading a file or an image. When uploading an image in a chat, "Ispublic" is "true." When uploading a file (including files in the document library, images, etc. and files in a chat), "Ispublic" is "false."

                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置This parameter is used to select a scenario when uploading a file or an image. When uploading an image in a chat, "Ispublic" is "true." When uploading a file (including files in the document library, images, etc. and files in a chat), "Ispublic" is "false."

                     * @param _isPublic This parameter is used to select a scenario when uploading a file or an image. When uploading an image in a chat, "Ispublic" is "true." When uploading a file (including files in the document library, images, etc. and files in a chat), "Ispublic" is "false."

                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取Storage type: offline - offline file; realtime - real-time file. If empty, it defaults to offline.
                     * @return TypeKey Storage type: offline - offline file; realtime - real-time file. If empty, it defaults to offline.
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置Storage type: offline - offline file; realtime - real-time file. If empty, it defaults to offline.
                     * @param _typeKey Storage type: offline - offline file; realtime - real-time file. If empty, it defaults to offline.
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                private:

                    /**
                     * Application ID. The parameter still needs to be filled in. Different combinations of parameters will result in different permissions. For details, see https://cloud.tencent.com/document/product/1759/116238.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * File type, normal file name type suffixes, such as xlsx, pdf, docx, png, etc.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * This parameter is used to select a scenario when uploading a file or an image. When uploading an image in a chat, "Ispublic" is "true." When uploading a file (including files in the document library, images, etc. and files in a chat), "Ispublic" is "false."

                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * Storage type: offline - offline file; realtime - real-time file. If empty, it defaults to offline.
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_
