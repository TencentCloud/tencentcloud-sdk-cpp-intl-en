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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FOLDERLOCATOR_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FOLDERLOCATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Folder locator
                */
                class FolderLocator : public AbstractModel
                {
                public:
                    FolderLocator();
                    ~FolderLocator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Node ID.</p>
                     * @return FolderId <p>Node ID.</p>
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>Node ID.</p>
                     * @param _folderId <p>Node ID.</p>
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取<p>Node path</p>
                     * @return PathName <p>Node path</p>
                     * 
                     */
                    std::string GetPathName() const;

                    /**
                     * 设置<p>Node path</p>
                     * @param _pathName <p>Node path</p>
                     * 
                     */
                    void SetPathName(const std::string& _pathName);

                    /**
                     * 判断参数 PathName 是否已赋值
                     * @return PathName 是否已赋值
                     * 
                     */
                    bool PathNameHasBeenSet() const;

                private:

                    /**
                     * <p>Node ID.</p>
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>Node path</p>
                     */
                    std::string m_pathName;
                    bool m_pathNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FOLDERLOCATOR_H_
