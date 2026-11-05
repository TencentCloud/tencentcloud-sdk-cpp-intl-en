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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>
#include <tencentcloud/adp/v20260520/model/Operator.h>
#include <tencentcloud/adp/v20260520/model/KBPermission.h>
#include <tencentcloud/adp/v20260520/model/KBSpaceShare.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Digest information of the knowledge base
                */
                class KBSummary : public AbstractModel
                {
                public:
                    KBSummary();
                    ~KBSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>List of associated applications. Returned only for shared knowledge base.</p>
                     * @return AppList <p>List of associated applications. Returned only for shared knowledge base.</p>
                     * 
                     */
                    std::vector<Identity> GetAppList() const;

                    /**
                     * 设置<p>List of associated applications. Returned only for shared knowledge base.</p>
                     * @param _appList <p>List of associated applications. Returned only for shared knowledge base.</p>
                     * 
                     */
                    void SetAppList(const std::vector<Identity>& _appList);

                    /**
                     * 判断参数 AppList 是否已赋值
                     * @return AppList 是否已赋值
                     * 
                     */
                    bool AppListHasBeenSet() const;

                    /**
                     * 获取<p>Creation time (Unix seconds).</p>
                     * @return CreateTime <p>Creation time (Unix seconds).</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time (Unix seconds).</p>
                     * @param _createTime <p>Creation time (Unix seconds).</p>
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
                     * 获取<p>Creator</p>
                     * @return Creator <p>Creator</p>
                     * 
                     */
                    Operator GetCreator() const;

                    /**
                     * 设置<p>Creator</p>
                     * @param _creator <p>Creator</p>
                     * 
                     */
                    void SetCreator(const Operator& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Number of documents</p>
                     * @return DocCount <p>Number of documents</p>
                     * 
                     */
                    uint64_t GetDocCount() const;

                    /**
                     * 设置<p>Number of documents</p>
                     * @param _docCount <p>Number of documents</p>
                     * 
                     */
                    void SetDocCount(const uint64_t& _docCount);

                    /**
                     * 判断参数 DocCount 是否已赋值
                     * @return DocCount 是否已赋值
                     * 
                     */
                    bool DocCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is excessive</p>
                     * @return IsExceeded <p>Whether it is excessive</p>
                     * 
                     */
                    bool GetIsExceeded() const;

                    /**
                     * 设置<p>Whether it is excessive</p>
                     * @param _isExceeded <p>Whether it is excessive</p>
                     * 
                     */
                    void SetIsExceeded(const bool& _isExceeded);

                    /**
                     * 判断参数 IsExceeded 是否已赋值
                     * @return IsExceeded 是否已赋值
                     * 
                     */
                    bool IsExceededHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Type: 1=default knowledge base, 2=shared knowledge base<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * @return KbType <p>Type: 1=default knowledge base, 2=shared knowledge base<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKbType() const;

                    /**
                     * 设置<p>Type: 1=default knowledge base, 2=shared knowledge base<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * @param _kbType <p>Type: 1=default knowledge base, 2=shared knowledge base<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKbType(const int64_t& _kbType);

                    /**
                     * 判断参数 KbType 是否已赋值
                     * @return KbType 是否已赋值
                     * 
                     */
                    bool KbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Last operator. Returned only for shared knowledge bases.</p>
                     * @return LatestOperator <p>Last operator. Returned only for shared knowledge bases.</p>
                     * 
                     */
                    Operator GetLatestOperator() const;

                    /**
                     * 设置<p>Last operator. Returned only for shared knowledge bases.</p>
                     * @param _latestOperator <p>Last operator. Returned only for shared knowledge bases.</p>
                     * 
                     */
                    void SetLatestOperator(const Operator& _latestOperator);

                    /**
                     * 判断参数 LatestOperator 是否已赋值
                     * @return LatestOperator 是否已赋值
                     * 
                     */
                    bool LatestOperatorHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base name.</p>
                     * @return Name <p>Knowledge base name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Knowledge base name.</p>
                     * @param _name <p>Knowledge base name.</p>
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
                     * 获取<p>Operation permission.</p>
                     * @return Permission <p>Operation permission.</p>
                     * 
                     */
                    KBPermission GetPermission() const;

                    /**
                     * 设置<p>Operation permission.</p>
                     * @param _permission <p>Operation permission.</p>
                     * 
                     */
                    void SetPermission(const KBPermission& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>List of in-processing statuses</p>
                     * @return ProcessingFlagList <p>List of in-processing statuses</p>
                     * 
                     */
                    std::vector<int64_t> GetProcessingFlagList() const;

                    /**
                     * 设置<p>List of in-processing statuses</p>
                     * @param _processingFlagList <p>List of in-processing statuses</p>
                     * 
                     */
                    void SetProcessingFlagList(const std::vector<int64_t>& _processingFlagList);

                    /**
                     * 判断参数 ProcessingFlagList 是否已赋值
                     * @return ProcessingFlagList 是否已赋值
                     * 
                     */
                    bool ProcessingFlagListHasBeenSet() const;

                    /**
                     * 获取<p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat official account</td></tr></tbody></table></p>
                     * @return SharedSubType <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat official account</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSharedSubType() const;

                    /**
                     * 设置<p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat official account</td></tr></tbody></table></p>
                     * @param _sharedSubType <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat official account</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSharedSubType(const int64_t& _sharedSubType);

                    /**
                     * 判断参数 SharedSubType 是否已赋值
                     * @return SharedSubType 是否已赋值
                     * 
                     */
                    bool SharedSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Update time (Unix seconds)</p>
                     * @return UpdateTime <p>Update time (Unix seconds)</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time (Unix seconds)</p>
                     * @param _updateTime <p>Update time (Unix seconds)</p>
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
                     * 获取<p>Knowledge base space share information</p>
                     * @return SpaceShare <p>Knowledge base space share information</p>
                     * 
                     */
                    KBSpaceShare GetSpaceShare() const;

                    /**
                     * 设置<p>Knowledge base space share information</p>
                     * @param _spaceShare <p>Knowledge base space share information</p>
                     * 
                     */
                    void SetSpaceShare(const KBSpaceShare& _spaceShare);

                    /**
                     * 判断参数 SpaceShare 是否已赋值
                     * @return SpaceShare 是否已赋值
                     * 
                     */
                    bool SpaceShareHasBeenSet() const;

                private:

                    /**
                     * <p>List of associated applications. Returned only for shared knowledge base.</p>
                     */
                    std::vector<Identity> m_appList;
                    bool m_appListHasBeenSet;

                    /**
                     * <p>Creation time (Unix seconds).</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Creator</p>
                     */
                    Operator m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Number of documents</p>
                     */
                    uint64_t m_docCount;
                    bool m_docCountHasBeenSet;

                    /**
                     * <p>Whether it is excessive</p>
                     */
                    bool m_isExceeded;
                    bool m_isExceededHasBeenSet;

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Type: 1=default knowledge base, 2=shared knowledge base<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     */
                    int64_t m_kbType;
                    bool m_kbTypeHasBeenSet;

                    /**
                     * <p>Last operator. Returned only for shared knowledge bases.</p>
                     */
                    Operator m_latestOperator;
                    bool m_latestOperatorHasBeenSet;

                    /**
                     * <p>Knowledge base name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Operation permission.</p>
                     */
                    KBPermission m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>List of in-processing statuses</p>
                     */
                    std::vector<int64_t> m_processingFlagList;
                    bool m_processingFlagListHasBeenSet;

                    /**
                     * <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat official account</td></tr></tbody></table></p>
                     */
                    int64_t m_sharedSubType;
                    bool m_sharedSubTypeHasBeenSet;

                    /**
                     * <p>Update time (Unix seconds)</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Knowledge base space share information</p>
                     */
                    KBSpaceShare m_spaceShare;
                    bool m_spaceShareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSUMMARY_H_
