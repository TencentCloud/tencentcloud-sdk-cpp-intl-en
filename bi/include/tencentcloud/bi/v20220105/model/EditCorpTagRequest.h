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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * EditCorpTag request structure.
                */
                class EditCorpTagRequest : public AbstractModel
                {
                public:
                    EditCorpTagRequest();
                    ~EditCorpTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tag ID
                     * @return Id tag ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置tag ID
                     * @param _id tag ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Tag name.
                     * @return Name Tag name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tag name.
                     * @param _name Tag name.
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
                     * 获取Import tag mode (manual/auto)
                     * @return ImportType Import tag mode (manual/auto)
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置Import tag mode (manual/auto)
                     * @param _importType Import tag mode (manual/auto)
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取id of the tag table for automatic import
                     * @return AutoImportTagTableId id of the tag table for automatic import
                     * 
                     */
                    int64_t GetAutoImportTagTableId() const;

                    /**
                     * 设置id of the tag table for automatic import
                     * @param _autoImportTagTableId id of the tag table for automatic import
                     * 
                     */
                    void SetAutoImportTagTableId(const int64_t& _autoImportTagTableId);

                    /**
                     * 判断参数 AutoImportTagTableId 是否已赋值
                     * @return AutoImportTagTableId 是否已赋值
                     * 
                     */
                    bool AutoImportTagTableIdHasBeenSet() const;

                    /**
                     * 获取Automatic import of associated tag fields
                     * @return AutoImportField Automatic import of associated tag fields
                     * 
                     */
                    std::string GetAutoImportField() const;

                    /**
                     * 设置Automatic import of associated tag fields
                     * @param _autoImportField Automatic import of associated tag fields
                     * 
                     */
                    void SetAutoImportField(const std::string& _autoImportField);

                    /**
                     * 判断参数 AutoImportField 是否已赋值
                     * @return AutoImportField 是否已赋值
                     * 
                     */
                    bool AutoImportFieldHasBeenSet() const;

                    /**
                     * 获取Whether it is an async request.
                     * @return AsyncRequest Whether it is an async request.
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置Whether it is an async request.
                     * @param _asyncRequest Whether it is an async request.
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取Name of the tag table for automatic import
                     * @return AutoImportTagTableName Name of the tag table for automatic import
                     * 
                     */
                    std::string GetAutoImportTagTableName() const;

                    /**
                     * 设置Name of the tag table for automatic import
                     * @param _autoImportTagTableName Name of the tag table for automatic import
                     * 
                     */
                    void SetAutoImportTagTableName(const std::string& _autoImportTagTableName);

                    /**
                     * 判断参数 AutoImportTagTableName 是否已赋值
                     * @return AutoImportTagTableName 是否已赋值
                     * 
                     */
                    bool AutoImportTagTableNameHasBeenSet() const;

                    /**
                     * 获取Transaction ID.
                     * @return TranId Transaction ID.
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置Transaction ID.
                     * @param _tranId Transaction ID.
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                private:

                    /**
                     * tag ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Tag name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Import tag mode (manual/auto)
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * id of the tag table for automatic import
                     */
                    int64_t m_autoImportTagTableId;
                    bool m_autoImportTagTableIdHasBeenSet;

                    /**
                     * Automatic import of associated tag fields
                     */
                    std::string m_autoImportField;
                    bool m_autoImportFieldHasBeenSet;

                    /**
                     * Whether it is an async request.
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * Name of the tag table for automatic import
                     */
                    std::string m_autoImportTagTableName;
                    bool m_autoImportTagTableNameHasBeenSet;

                    /**
                     * Transaction ID.
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_
