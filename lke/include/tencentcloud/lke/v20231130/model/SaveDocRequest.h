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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>
#include <tencentcloud/lke/v20231130/model/DuplicateFileHandle.h>
#include <tencentcloud/lke/v20231130/model/UpdatePeriodInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * SaveDoc request structure.
                */
                class SaveDocRequest : public AbstractModel
                {
                public:
                    SaveDocRequest();
                    ~SaveDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
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
                     * 获取File name.
                     * @return FileName File name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name.
                     * @param _fileName File name.
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
                     * 获取File type (md|txt|docx|pdf|xlsx).
                     * @return FileType File type (md|txt|docx|pdf|xlsx).
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type (md|txt|docx|pdf|xlsx).
                     * @param _fileType File type (md|txt|docx|pdf|xlsx).
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
                     * 获取The cos path of the platform, consistent with the UploadPath parameter queried by the DescribeStorageCredential api.
                     * @return CosUrl The cos path of the platform, consistent with the UploadPath parameter queried by the DescribeStorageCredential api.
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置The cos path of the platform, consistent with the UploadPath parameter queried by the DescribeStorageCredential api.
                     * @param _cosUrl The cos path of the platform, consistent with the UploadPath parameter queried by the DescribeStorageCredential api.
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取ETag, short for entity tag, is an information tag that identifies the content of an object when it is created and can be used to check whether the content of the object has changed.
                     * @return ETag ETag, short for entity tag, is an information tag that identifies the content of an object when it is created and can be used to check whether the content of the object has changed.
                     * 
                     */
                    std::string GetETag() const;

                    /**
                     * 设置ETag, short for entity tag, is an information tag that identifies the content of an object when it is created and can be used to check whether the content of the object has changed.
                     * @param _eTag ETag, short for entity tag, is an information tag that identifies the content of an object when it is created and can be used to check whether the content of the object has changed.
                     * 
                     */
                    void SetETag(const std::string& _eTag);

                    /**
                     * 判断参数 ETag 是否已赋值
                     * @return ETag 是否已赋值
                     * 
                     */
                    bool ETagHasBeenSet() const;

                    /**
                     * 获取Verify the consistency of the uploaded file on the cloud and the local file by validating the crc64 encoding in the cos_hash x-cos-hash-crc64ecma header.<br> After the COS is successfully uploaded, obtain it from the response header.
                     * @return CosHash Verify the consistency of the uploaded file on the cloud and the local file by validating the crc64 encoding in the cos_hash x-cos-hash-crc64ecma header.<br> After the COS is successfully uploaded, obtain it from the response header.
                     * 
                     */
                    std::string GetCosHash() const;

                    /**
                     * 设置Verify the consistency of the uploaded file on the cloud and the local file by validating the crc64 encoding in the cos_hash x-cos-hash-crc64ecma header.<br> After the COS is successfully uploaded, obtain it from the response header.
                     * @param _cosHash Verify the consistency of the uploaded file on the cloud and the local file by validating the crc64 encoding in the cos_hash x-cos-hash-crc64ecma header.<br> After the COS is successfully uploaded, obtain it from the response header.
                     * 
                     */
                    void SetCosHash(const std::string& _cosHash);

                    /**
                     * 判断参数 CosHash 是否已赋值
                     * @return CosHash 是否已赋值
                     * 
                     */
                    bool CosHashHasBeenSet() const;

                    /**
                     * 获取File size.
                     * @return Size File size.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置File size.
                     * @param _size File size.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Applicable scope of labels: 1: all; 2: by conditional range.
                     * @return AttrRange Applicable scope of labels: 1: all; 2: by conditional range.
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置Applicable scope of labels: 1: all; 2: by conditional range.
                     * @param _attrRange Applicable scope of labels: 1: all; 2: by conditional range.
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Source (0: source file import; 1: web page import).
                     * @return Source Source (0: source file import; 1: web page import).
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置Source (0: source file import; 1: web page import).
                     * @param _source Source (0: source file import; 1: web page import).
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Web page (or custom link) address.
                     * @return WebUrl Web page (or custom link) address.
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置Web page (or custom link) address.
                     * @param _webUrl Web page (or custom link) address.
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取Label reference.
                     * @return AttrLabels Label reference.
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置Label reference.
                     * @param _attrLabels Label reference.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取External reference link type: 0: system link; 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * @return ReferUrlType External reference link type: 0: system link; 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置External reference link type: 0: system link; 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * @param _referUrlType External reference link type: 0: system link; 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    void SetReferUrlType(const uint64_t& _referUrlType);

                    /**
                     * 判断参数 ReferUrlType 是否已赋值
                     * @return ReferUrlType 是否已赋值
                     * 
                     */
                    bool ReferUrlTypeHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置Effective start time, unix timestamp.
                     * @param _expireStart Effective start time, unix timestamp.
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @return ExpireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @param _expireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Whether to reference a link.
                     * @return IsRefer Whether to reference a link.
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置Whether to reference a link.
                     * @param _isRefer Whether to reference a link.
                     * 
                     */
                    void SetIsRefer(const bool& _isRefer);

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取Document operation type: 1: batch import (import Q&A pairs in batches); 2: document import (normally import a single document). The default value is 1.<br>Please note that when opt = 1, please download the Excel template from the Tencent Cloud Agent Development Platform/ADP page.
                     * @return Opt Document operation type: 1: batch import (import Q&A pairs in batches); 2: document import (normally import a single document). The default value is 1.<br>Please note that when opt = 1, please download the Excel template from the Tencent Cloud Agent Development Platform/ADP page.
                     * 
                     */
                    uint64_t GetOpt() const;

                    /**
                     * 设置Document operation type: 1: batch import (import Q&A pairs in batches); 2: document import (normally import a single document). The default value is 1.<br>Please note that when opt = 1, please download the Excel template from the Tencent Cloud Agent Development Platform/ADP page.
                     * @param _opt Document operation type: 1: batch import (import Q&A pairs in batches); 2: document import (normally import a single document). The default value is 1.<br>Please note that when opt = 1, please download the Excel template from the Tencent Cloud Agent Development Platform/ADP page.
                     * 
                     */
                    void SetOpt(const uint64_t& _opt);

                    /**
                     * 判断参数 Opt 是否已赋值
                     * @return Opt 是否已赋值
                     * 
                     */
                    bool OptHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Category ID.
                     * @param _cateBizId Category ID.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsDownload 
                     * 
                     */
                    bool GetIsDownload() const;

                    /**
                     * 设置
                     * @param _isDownload 
                     * 
                     */
                    void SetIsDownload(const bool& _isDownload);

                    /**
                     * 判断参数 IsDownload 是否已赋值
                     * @return IsDownload 是否已赋值
                     * 
                     */
                    bool IsDownloadHasBeenSet() const;

                    /**
                     * 获取
                     * @return DuplicateFileHandles 
                     * 
                     */
                    std::vector<DuplicateFileHandle> GetDuplicateFileHandles() const;

                    /**
                     * 设置
                     * @param _duplicateFileHandles 
                     * 
                     */
                    void SetDuplicateFileHandles(const std::vector<DuplicateFileHandle>& _duplicateFileHandles);

                    /**
                     * 判断参数 DuplicateFileHandles 是否已赋值
                     * @return DuplicateFileHandles 是否已赋值
                     * 
                     */
                    bool DuplicateFileHandlesHasBeenSet() const;

                    /**
                     * 获取
                     * @return SplitRule 
                     * 
                     */
                    std::string GetSplitRule() const;

                    /**
                     * 设置
                     * @param _splitRule 
                     * 
                     */
                    void SetSplitRule(const std::string& _splitRule);

                    /**
                     * 判断参数 SplitRule 是否已赋值
                     * @return SplitRule 是否已赋值
                     * 
                     */
                    bool SplitRuleHasBeenSet() const;

                    /**
                     * 获取
                     * @return UpdatePeriodInfo 
                     * 
                     */
                    UpdatePeriodInfo GetUpdatePeriodInfo() const;

                    /**
                     * 设置
                     * @param _updatePeriodInfo 
                     * 
                     */
                    void SetUpdatePeriodInfo(const UpdatePeriodInfo& _updatePeriodInfo);

                    /**
                     * 判断参数 UpdatePeriodInfo 是否已赋值
                     * @return UpdatePeriodInfo 是否已赋值
                     * 
                     */
                    bool UpdatePeriodInfoHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * File name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File type (md|txt|docx|pdf|xlsx).
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * The cos path of the platform, consistent with the UploadPath parameter queried by the DescribeStorageCredential api.
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * ETag, short for entity tag, is an information tag that identifies the content of an object when it is created and can be used to check whether the content of the object has changed.
                     */
                    std::string m_eTag;
                    bool m_eTagHasBeenSet;

                    /**
                     * Verify the consistency of the uploaded file on the cloud and the local file by validating the crc64 encoding in the cos_hash x-cos-hash-crc64ecma header.<br> After the COS is successfully uploaded, obtain it from the response header.
                     */
                    std::string m_cosHash;
                    bool m_cosHashHasBeenSet;

                    /**
                     * File size.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Applicable scope of labels: 1: all; 2: by conditional range.
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Source (0: source file import; 1: web page import).
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Web page (or custom link) address.
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * Label reference.
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * External reference link type: 0: system link; 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * Effective start time, unix timestamp.
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * Effective end time, unix timestamp. 0 indicates permanent validity.
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * Whether to reference a link.
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * Document operation type: 1: batch import (import Q&A pairs in batches); 2: document import (normally import a single document). The default value is 1.<br>Please note that when opt = 1, please download the Excel template from the Tencent Cloud Agent Development Platform/ADP page.
                     */
                    uint64_t m_opt;
                    bool m_optHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isDownload;
                    bool m_isDownloadHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DuplicateFileHandle> m_duplicateFileHandles;
                    bool m_duplicateFileHandlesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_splitRule;
                    bool m_splitRuleHasBeenSet;

                    /**
                     * 
                     */
                    UpdatePeriodInfo m_updatePeriodInfo;
                    bool m_updatePeriodInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
