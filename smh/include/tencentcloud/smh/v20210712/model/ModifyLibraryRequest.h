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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * ModifyLibrary request structure.
                */
                class ModifyLibraryRequest : public AbstractModel
                {
                public:
                    ModifyLibraryRequest();
                    ~ModifyLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media library ID.
                     * @return LibraryId Media library ID.
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置Media library ID.
                     * @param _libraryId Media library ID.
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取Media library name. up to 50 characters. leave empty to keep the current value.
                     * @return Name Media library name. up to 50 characters. leave empty to keep the current value.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media library name. up to 50 characters. leave empty to keep the current value.
                     * @param _name Media library name. up to 50 characters. leave empty to keep the current value.
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
                     * 获取Specifies the remark, up to 250 characters. leave it empty to keep the original value.
                     * @return Remark Specifies the remark, up to 250 characters. leave it empty to keep the original value.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark, up to 250 characters. leave it empty to keep the original value.
                     * @param _remark Specifies the remark, up to 250 characters. leave it empty to keep the original value.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Media library configuration item. some parameters cannot be changed after creation and only modify passed parameters. if this parameter is not passed, no configuration item will be modified.
                     * @return LibraryExtension Media library configuration item. some parameters cannot be changed after creation and only modify passed parameters. if this parameter is not passed, no configuration item will be modified.
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置Media library configuration item. some parameters cannot be changed after creation and only modify passed parameters. if this parameter is not passed, no configuration item will be modified.
                     * @param _libraryExtension Media library configuration item. some parameters cannot be changed after creation and only modify passed parameters. if this parameter is not passed, no configuration item will be modified.
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                private:

                    /**
                     * Media library ID.
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * Media library name. up to 50 characters. leave empty to keep the current value.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the remark, up to 250 characters. leave it empty to keep the original value.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Media library configuration item. some parameters cannot be changed after creation and only modify passed parameters. if this parameter is not passed, no configuration item will be modified.
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
