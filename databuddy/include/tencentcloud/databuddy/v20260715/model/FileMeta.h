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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_

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
                * File Metadata
                */
                class FileMeta : public AbstractModel
                {
                public:
                    FileMeta();
                    ~FileMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File id</p>
                     * @return FileId <p>File id</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File id</p>
                     * @param _fileId <p>File id</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>File/folder name</p>
                     * @return FileName <p>File/folder name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File/folder name</p>
                     * @param _fileName <p>File/folder name</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>File type</p>
                     * @return FileType <p>File type</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type</p>
                     * @param _fileType <p>File type</p>
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
                     * 获取<p>Creation time. Millisecond unix second-level timestamp</p><p>Parameter format: timestamp</p>
                     * @return CreateTime <p>Creation time. Millisecond unix second-level timestamp</p><p>Parameter format: timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time. Millisecond unix second-level timestamp</p><p>Parameter format: timestamp</p>
                     * @param _createTime <p>Creation time. Millisecond unix second-level timestamp</p><p>Parameter format: timestamp</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time</p><p>Parameter format: timestamp string</p>
                     * @return UpdateTime <p>Update time</p><p>Parameter format: timestamp string</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Parameter format: timestamp string</p>
                     * @param _updateTime <p>Update time</p><p>Parameter format: timestamp string</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>acl permission type</p>
                     * @return AllowActions <p>acl permission type</p>
                     * 
                     */
                    std::vector<std::string> GetAllowActions() const;

                    /**
                     * 设置<p>acl permission type</p>
                     * @param _allowActions <p>acl permission type</p>
                     * 
                     */
                    void SetAllowActions(const std::vector<std::string>& _allowActions);

                    /**
                     * 判断参数 AllowActions 是否已赋值
                     * @return AllowActions 是否已赋值
                     * 
                     */
                    bool AllowActionsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to collect</p>
                     * @return IsFavorite <p>Whether to collect</p>
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置<p>Whether to collect</p>
                     * @param _isFavorite <p>Whether to collect</p>
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取<p>File path</p>
                     * @return PathName <p>File path</p>
                     * 
                     */
                    std::string GetPathName() const;

                    /**
                     * 设置<p>File path</p>
                     * @param _pathName <p>File path</p>
                     * 
                     */
                    void SetPathName(const std::string& _pathName);

                    /**
                     * 判断参数 PathName 是否已赋值
                     * @return PathName 是否已赋值
                     * 
                     */
                    bool PathNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is generated by the system</p>
                     * @return IsSystemGenerated <p>Whether it is generated by the system</p>
                     * 
                     */
                    bool GetIsSystemGenerated() const;

                    /**
                     * 设置<p>Whether it is generated by the system</p>
                     * @param _isSystemGenerated <p>Whether it is generated by the system</p>
                     * 
                     */
                    void SetIsSystemGenerated(const bool& _isSystemGenerated);

                    /**
                     * 判断参数 IsSystemGenerated 是否已赋值
                     * @return IsSystemGenerated 是否已赋值
                     * 
                     */
                    bool IsSystemGeneratedHasBeenSet() const;

                private:

                    /**
                     * <p>File id</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>File/folder name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File type</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Creation time. Millisecond unix second-level timestamp</p><p>Parameter format: timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time</p><p>Parameter format: timestamp string</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>acl permission type</p>
                     */
                    std::vector<std::string> m_allowActions;
                    bool m_allowActionsHasBeenSet;

                    /**
                     * <p>Whether to collect</p>
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * <p>File path</p>
                     */
                    std::string m_pathName;
                    bool m_pathNameHasBeenSet;

                    /**
                     * <p>Whether it is generated by the system</p>
                     */
                    bool m_isSystemGenerated;
                    bool m_isSystemGeneratedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_
